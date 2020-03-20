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

// グラフを2次元配列で表現
bool graph[101][101];
int N,M;
bool visited[101];
bool is_loop;

void dfs(int pre_node, int now_node){
  visited[now_node] = true;
  rep(i,1,N+1){
    if(graph[now_node][i]&& i!=pre_node){
      int next_node = i;
      if(visited[next_node])is_loop=true;
      else dfs(now_node, next_node);
    }
  }
}

int main(){
  int res=0;
  std::cin >> N>>M;
  rep(i,1,M+1){
    int src,dst;
    std::cin >> src >> dst;
    graph[src][dst] = true;
    graph[dst][src] = true;//無向グラフなので両方に入れる
  }
  for(int i=1;i<N+1;i++){
    if(visited[i]==false){
      is_loop=false;
      dfs(-1,i);
      if(is_loop==false)res++;
    }
  }
  std::cout << res << '\n';
}
