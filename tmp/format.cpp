#include <bits/stdc++.h>

#define rep(i, a, n)  for(ll i=a; i<n; i++)
#define per(i, a, n)  for(ll i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define LONGMAX 1e18
#define INTMAX 1000000000

using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
const ll mod = 1e9+7;
const long double EPS = 0.0000000001;

int bfs(int sy, int sx, int gy, int gx, string s[]){
	int reach[h][w];
	for(int i = 0; i < h; i++)for(int j = 0; j < w; j++)reach[i][j] = 0;
	queue<P> q;
	q.push(P(sy, sx));
	while(!q.empty()){
		P point = q.front(); q.pop();
		int cy = point.first;  int cx = point.second;
		for(auto v: {P(1, 0), P(-1, 0), P(0, 1), P(0,-1)}){
			int ny = cy + v.first; int nx = cx + v.second;
			// 到達できるかの判定
			// 到達条件は，迷路の幅の範囲内，すでに訪問していないこと，壁じゃないこと
			if(ny < 0 or ny > h - 1)continue;
			if(nx < 0 or nx > w - 1)continue;
			if(reach[ny][nx] != 0)continue;
			if(s[ny][nx] == '#')continue;

			reach[ny][nx] = reach[cy][cx]+1;
			q.push(P(ny, nx));
		}
	}
	return reach[gy][gx];
}

// union-find
vector<ll> parent, size, depth;
void init(ll n){
  for(ll i = 0; i < n; i++){
    parent.push_back(i);
    depth.push_back(0);
    size.push_back(1);
  }
}

ll root(ll x){
  if(parent[x] == x)return x;
  else return root(parent[x]);
}

void unite(ll x, ll y){
  x = root(x);
  y = root(y);
  if(x == y) return; //一緒の連結成分であった時
  if(depth[x] < depth[y]){
    parent[x] = y; //yの方が深いので，xの親をyに変更
    size[y] += size[x];
  }else{
    parent[y] = x;
    size[x] += size[y];
    if(depth[x] == depth[y])depth[x]++; //xとyの深さが同じ時は，xの下にyを付け加えることに
  }
}

ll treesize(ll x){
  return size[root(x)];
}
// union-find end