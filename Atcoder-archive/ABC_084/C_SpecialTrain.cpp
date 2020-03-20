#include<bits/stdc++.h>

#define rep(i, a, n)  for(int i=a; i<n; i++)
#define per(i, a, n)  for(int i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MAX 1000000001;
using namespace std;
typedef long long ll;

int n;
int c[600],s[600],f[600];

int main(){
  std::cin >> n;
  rep(i,1,n)std::cin >> c[i] >> s[i] >> f[i];

  rep(i,1,n+1){
    int res = 0;
    rep(j,i,n){
      if(s[j] > res)res = s[j];
      if(res % f[j]!=0) res += (f[j]-(res%f[j]));
      res += c[j];
    }
    std::cout << res << '\n';
  }
}
