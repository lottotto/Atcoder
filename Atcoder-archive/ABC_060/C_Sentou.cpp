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

int n,T;
int t[200200];

int main(){
  cin >> n >> T;
  ll ans =0;
  cin >> t[0];
  rep(i,1,n){
    cin >> t[i];
    if(t[i]-t[i-1]<T){
      ans += t[i]-t[i-1];
    }else{
      ans += T;
    }
  }
  ans += T;
  cout << ans << endl;
}
