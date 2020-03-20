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
#include<deque>

#define rep(i, a, n)  for(int i=a; i<n; i++)
#define per(i, a, n)  for(int i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MAX 1000001
using namespace std;
typedef long long ll;

typedef pair<int, int> P;
int h,w;
char s[510][510];
int d[510][510];
int sy, sx;
int gy, gx;
int dy[4] = {1,0,-1,0};
int dx[4] = {0,1,0,-1};

int bfs(int y,int x){
  rep(i,1,h+1)rep(j,1,w+1)d[i][j] = MAX; //初期化
  d[y][x] = 0;
  deque<P> q;
  q.push_back(P(y,x));

  while(q.size()){
    P corrent = q.front();q.pop_front();
    int cy = corrent.first; int cx = corrent.second;
    rep(i,0,4){
      int ny = cy+dy[i]; int nx = cx+dx[i];
      if(ny<1||h<ny||nx<1||w<nx)continue;

      bool wall = (s[ny][nx] == '#');
      int d2 =d[cy][cx]+wall;

      if(d[ny][nx]>d2){
        d[ny][nx] = d2;
        if(s[ny][nx] == '#'){
          q.push_back(P(ny,nx));
        }else{
          q.push_front(P(ny,nx));//壁じゃないところを埋めていく→ノーコストで到達できるところを作り出す的な
        }
      }
    }
  }
  return d[gy][gx];
}

int main(){
  std::cin >> h>>w;
  rep(i,1,h+1){
    rep(j,1,w+1){
      std::cin >> s[i][j];
      if(s[i][j]=='s'){
        sy=i;
        sx=j;}
      if(s[i][j]=='g'){
        gy=i;
        gx=j;
      }
    }
  }
  std::cout << (bfs(sy,sx) <= 2?"YES":"NO") << '\n';
}
