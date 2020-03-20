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

int n,m;
int a[3000], b[3000];
bool graph[3000][3000];
vector <bool> visited(100,false);

int dfs(int src){
  visited[src] = true;
  rep(i,1,n+1){
    if(graph[src][i]&&!visited[i])dfs(i);//深さ優先探索で到達判定
  }
}

int main(){
  cin >> n >> m;
  rep(i,0,m){
    cin >> a[i] >> b[i];
    graph[a[i]][b[i]]=true;
    graph[b[i]][a[i]]=true;
  }
  int ans =0;
  rep(i,0,m){
    graph[a[i]][b[i]] = false;
    graph[b[i]][a[i]] = false;
    dfs(1);

    bool bridge=false;
    rep(i,1,n+1) if(visited[i]==false) bridge=true;
    if(bridge)ans+=1;

    graph[a[i]][b[i]] = true;
    graph[b[i]][a[i]] = true;
    rep(i,1,n+1) visited[i]=false;

  }
  cout << ans << endl;

}
