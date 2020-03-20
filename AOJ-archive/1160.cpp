#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<map>
#include<numeric>
#include<set>
#include<string>
#include<utility>
#include<vector>
#include<queue>


#define rep(i, a, n)  for(int i=a; i<n; i++)
#define per(i, a, n)  for(int i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MAX 1000001
using namespace std;
typedef long long ll;

int w,h;
int c[51][51];

void dfs(int y,int x){
  if(y<1||51<=y||x<1||51<=x||c[y][x]==0)return;
  c[y][x]=0;
  dfs(y-1, x-1);
  dfs(y-1, x);
  dfs(y-1, x+1);
  dfs(y, x-1);
  dfs(y, x+1);
  dfs(y+1, x-1);
  dfs(y+1, x);
  dfs(y+1, x+1);
}

int main(){
  while(true){
    std::cin >> w>>h;
    if(w==0&&h==0)break;
    rep(i,1,h+1){
      rep(j,1,w+1){
        std::cin >> c[i][j];
      }
    }
    int res=0;
    rep(i,1,h+1){
      rep(j,1,w+1){
        // std::cout << c[1][1] << '\n';
        if(c[i][j]==1){
          // std::cout << "/* message */" << '\n';
          dfs(i,j);
          res++;
        }
      }
    }
    std::cout << res << '\n';
  }
  return 0;
}
