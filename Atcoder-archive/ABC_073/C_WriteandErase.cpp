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

ll n;
ll a[100100];
map<ll, bool> mp;
int main(){
  cin >> n;
  rep(i,0,n){
    cin >> a[i];
    mp[a[i]] = !mp[a[i]];
  }
  ll ans=0;
  for(auto p :mp){
    ans += p.second;
  }
  cout << ans << endl;
}
