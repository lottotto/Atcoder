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
// typedef pair<ll,ll> p;

int h,w;
int R[2000][2000], L[2000][2000], U[2000][2000], D[2000][2000];


int main(){
  cin >> h >> w;
  vector<string> s(h);
  for(int i=0; i< h; i++) cin >> s[i];

  //左の探索
  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
          int cnt = 0;
          if(s[i][j]=='#')L[i][j] = 0;
          else if (j==0)L[i][j] = 1;
          else L[i][j] = L[i][j-1]+1;
    }
  }

  //右の探索
  for(int i = 0; i < h; i++){
    for(int j = w-1; j >= 0; j--){
          int cnt = 0;
          if(s[i][j]=='#')R[i][j] = 0;
          else if (j==w-1)R[i][j] = 1;
          else R[i][j] = R[i][j+1]+1;
    }
  }



  //下の探索
  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
          int cnt = 0;
          if(s[i][j]=='#')D[i][j] = 0;
          else if (i==0)D[i][j] = 1;
          else D[i][j] = D[i-1][j] + 1;
          // cout << D[i][j] << "";
    }
    
  }



  for(int i = h-1; i >= 0; i--){
    for(int j = 0; j < w; j++){
          int cnt = 0;
          if(s[i][j]=='#')U[i][j] = 0;
          else if (i==h-1)U[i][j] = 1;
          else U[i][j] = U[i+1][j] + 1;
    }
  }

  int ans = 0;
  for(int i=0; i<h;i++){
    for(int j=0; j<w; j++){
      ans = max(ans, U[i][j]+D[i][j]+R[i][j]+L[i][j]-3);
    }
  }
  cout << ans << endl;
}
