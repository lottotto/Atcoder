#include<bits/stdc++.h>

#define rep(i, a, n)  for(ll i=a; i<n; i++)
#define per(i, a, n)  for(ll i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define LONGMAX 1e18
#define INTMAX 1000000000
using namespace std;
typedef long long ll;
typedef pair<ll,ll> p;

int n;

ll gcd(ll x, ll y){
  if(y==0)return x;
  else return gcd(y, x%y);
}

int main(){
  cin >> n;
  vector<ll> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  vector<ll> l(n+2, 0),r(n+2, 0);
  for(int i = 0; i<n; i++){
    l[i+1] = gcd(l[i], a[i]);
    r[n-i] = gcd(r[n-(i-1)], a[n-i-1]);
  }
  ll ans = 0;
  for(int i=1; i < n+1; i++){
    ans = max(ans, gcd(l[i-1], r[i+1])); //なぜこのlの添え字がi-1なのか？
    // L: 0 12 3 3
    //     \  \ \     このペアで比較している．
    // R: 3 3 18 0
  }
  cout << ans << endl;
}