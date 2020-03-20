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
int n;
map<ll, ll> mp;
// 連想配列(辞書)を使いましょう。
int main(){
  std::cin >> n;
  rep(i,1,n+1){
    ll tmp;
    std::cin >> tmp;
    mp[tmp]++;
  }
  ll ans =0;
  for (auto p:mp){
    ll x = p.first;
    ll n = p.second;
    if(x>n)ans+=n;//全部削除
    else ans += n-x;
  }
  std::cout << ans << '\n';

}
