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
//深さ優先探索とかではない
// 1+...+ t <xであればどう頑張っても届かない
// 1+...+t >=x であれば、部分集合を取れば到達できる
// これだけ
int main(){
  cin >> x;
  ll sum = 0;
  ll ans = 0;
  rep(i,1,INTMAX){
    sum += i;
    ans = i;
    if(sum >=x)break;
  }
  cout << ans << endl;
}
