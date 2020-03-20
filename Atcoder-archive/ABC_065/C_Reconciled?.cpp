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

//1e9を使うと浮動小数点(double)型になるので、
//(int)を加えて型変換をすること

int m, n;
int mod = (int)1e9+7;

int main(){
  cin >> n >> m;
  if(abs(n-m)>=2){
    cout << "0" << endl;
  }else if (n==m){
    ll ans = 1;
    rep(i,1,n+1){
      ans *= i;
      ans = ans%mod;
    }
    cout <<(2*ans*ans)% mod<<endl;
  }else{
    ll ans = 1;
    rep(i,1,n+1){
      ans *= i;
      ans = ans%mod;
    }
    rep(i,1,m+1){
      ans *= i;
      ans= ans%mod;
    }
    cout << ans << endl;
  }
  return 0;
}
