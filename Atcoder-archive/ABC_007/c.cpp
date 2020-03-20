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

typedef pair<int,int> P;
int R, C;
int sy, sx;
int gy, gx;
char c[51][51];
int length[51][51];


int bfs(int y,int x){
  int dx[4] = {1,0,-1,0}; int dy[4] = {0,1,0,-1};
  //最短距離を初期化
  rep(i,0,50){
    rep(j,0,50)length[i][j]=MAX;
  }
  length[y][x] = 0;
  queue<P> q;
  q.push(P(y,x));
  while (q.size()) {
    P corrent = q.front(); q.pop();
    if(corrent.first == gy-1 && corrent.second == gx-1){
      break;
    }
    rep(i,0,4){
      int ny = corrent.first+dy[i]; int nx = corrent.second+dx[i];
      if((1<=ny && ny<51) && (1<=nx && nx<51) && c[ny][nx]=='.' && length[ny][nx]==MAX){
        length[ny][nx] = length[corrent.first][corrent.second]+1;
        q.push(P(ny,nx));
      }
    }
  }
  return length[gy-1][gx-1];
}

int main(){
  std::cin >> R>>C;
  std::cin >> sy>>sx;
  std::cin >> gy>>gx;
  rep(i,0,R){
    rep(j,0,C){
      std::cin >> c[i][j];
    }
  }
  int res = bfs(sy-1,sx-1);
  std::cout << res << '\n';
}
