#include <bits/stdc++.h>

#define rep(i, a, n)  for(ll i=a; i<n; i++)
#define per(i, a, n)  for(ll i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define LONGMAX 1e18
#define intMAX 1000000000
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
const ll mod = 1e9+7;
int n,q;

vector<int>graph[200200];
// bool graph[200200][200200];
vector<ll>tmp(200200);
 
void dfs(int v, int p){
	for (auto i : graph[v]){
		if(i == p) continue;
		tmp[i] += tmp[v];
		dfs(i, v);
	}
	//  for(int i = 1; i < n+1; i++){
	// 	 if(i == p) continue;
	// 	 if(graph[v][i]){
	// 		 tmp[i] += tmp[v];
	// 		 dfs(i, v);
	// 	 }
	//  }
 }

int main(){
	cin >> n >> q;
	int a,b;
	for(int i = 1; i < n; i++){
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
		// graph[a][b] = true;
		// graph[b][a] = true;
	}
	int p,x;
	for(int i = 0; i < q; i++){
		cin >> p >> x;
		tmp[p] += x;
	}
	dfs(1,0);
	for(int i = 1; i < n + 1; i++){
		cout << tmp[i] << " ";
	}

	return 0;
}
