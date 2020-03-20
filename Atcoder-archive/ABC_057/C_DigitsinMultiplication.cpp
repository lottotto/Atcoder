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

int main(){
  cin >> n;
  ll ans = INTMAX;
  for(ll i=1;i<=sqrt(n);i++){
    if(n%i!=0)continue; //割り切れない時
    ll a = i;
    ll b = (ll) n/i;
    ll tmp = (ll) max(log10(a)+1, log10(b)+1);
    ans = min(ans,tmp);
  }
  cout << ans <<endl;
}
