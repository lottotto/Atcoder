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

ll n, a[1010],ans;
int main(){
  cin >> n;
  ans = 1;
  rep(i,2,n+1){
    int div = i;
    rep(j,2,div+1){
      while(div%j==0){
        div /= j;
        a[j]++;//a[2]->素因数2をどれくらい所持しているか
      }
    }
  }
  rep(i,1,n+1){
    ans = (ans*(a[i]+1)%(INTMAX+7));
    // cout << ans << endl;
  }
  cout << ans <<  endl;
}
