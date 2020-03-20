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
typedef pair<int,int> p;

int n;
ll a[200200];
ll X=0, x=0;

int main(){
  cin >> n;
  rep(i,0,n){
    cin >> a[i];
    X += a[i];
  }
  ll ans = LONGMAX;
  rep(i,0,n-1){
    x += a[i];
    ans = min(ans, abs(X-2*x));
  }
  cout << ans << endl;
}
