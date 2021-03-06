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

// 連想配列(map)はキーによってソートされている！
//　バケツソートと一緒

int n,a,b;
ll k;
std::map<int, ll> mp;

int main(){
  cin >> n >> k;
  rep(i,0,n){
    cin >> a >> b;
    mp[a] += b;
  }
  ll count =0;
  ll ans;
  for(auto itr: mp){
    // cout << itr.first << ' ' << itr.second << endl;
    count += itr.second;
    if(count >= k){
      ans = itr.first;
      break;
    }
  }
  cout << ans << endl;
}
