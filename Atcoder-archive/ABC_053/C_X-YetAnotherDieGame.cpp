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

ll x;
int main(){
  cin >> x;
  ll ans = 2 * (x/11);
  if(x%11!=0 && x%11 <= 6)ans++;
  else if (x%11!=0 &&x%11<11)ans += 2;
  cout << ans << endl;
}
