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
// 添字の使い方！！
int n;
int f[200][20];
int p[200][20];

int main(){
  cin >> n;
  rep(i,1,n+1){
    rep(j,1,11)cin >> f[i][j];
  }
  rep(i,1,n+1)rep(j,0,11) cin >> p[i][j];
  int ans = -INTMAX;
  rep(b,1,(1<<10)){
    int cc = 0;
    rep(i,1,n+1){//店iについて
      int c = 0;
      rep(j,1,11)if(b&1<<(j-1))c+=f[i][j];
      cc += p[i][c];
    }
    ans = max(ans, cc);
  }
  std::cout << ans << '\n';
}
