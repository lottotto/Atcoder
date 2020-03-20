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

int k,n;
int a[200100];
vector <int> v(200100,0);

int main(){
  cin >> n >> k;
  rep(i,1,n+1)cin >> a[i];
  rep(i,1,n+1){
    v[a[i]]++;
  }
  sort(rall(v));
  ll ans = n;
  rep(i,0,k){
    ans -= v[i];
  }
  cout << ans << endl;

}
