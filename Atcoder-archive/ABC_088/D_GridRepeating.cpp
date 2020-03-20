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

typedef pair<int, int> P;
int h,w;
char s[100][100];
int d[100][100];
int sy, sx;
int gy, gx;

int bfs(int y,int x){
  int dy[4] = {1,0,-1,0};
  int dx[4] = {0,1,0,-1};

  rep(i,1,h+1){
    rep(j,1,w+1){
      d[i][j] = MAX;
    }
  }
  d[y][x] = 1;
  queue<P> q;
  q.push(P(y,x));
  while(q.size()){
    P corrent = q.front();q.pop();
    // std::cout << corrent.first<<corrent.second << '\n';
    if(corrent.first==gy&&corrent.second==gx)break;
    rep(i,0,4){
      int ny = corrent.first+dy[i]; int nx = corrent.second+dx[i];
      if(0<ny && ny<=h && 0<nx && nx<=w && s[ny][nx]=='.' && d[ny][nx]==MAX){
        d[ny][nx] = d[corrent.first][corrent.second]+1;
        q.push(P(ny,nx));
      }
    }
  }
  return d[gy][gx];
}
int count_sharp(){
  int cnt = 0;
  rep(i,1,h+1){
    rep(j,1,w+1){
      if(s[i][j] == '#')cnt++;
    }
  }
  return cnt;
}

int main(){
  std::cin >> h>>w;
  rep(i,1,h+1){
    rep(j,1,w+1){
      std::cin >> s[i][j];
    }
  }
  // std::cout << "/* message */" << '\n';
  sy=1;sx=1;
  gy=h;gx=w;
  int min_d = bfs(sy,sx);
  if(min_d != MAX)std::cout << (h*w - count_sharp() - min_d) << '\n';
  else std::cout << "-1" << '\n';

}
