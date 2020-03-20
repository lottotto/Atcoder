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

int n,m;

int main(){
	cin >> n >> m;
	vector<int>a(n),b(n);
	vector<vector<int>>work(100100);
	
	for(int i=0; i < n; i++){
		cin >> a[i] >> b[i];
		work[a[i]].push_back(b[i]);
	} 
	ll ans = 0;
	priority_queue<int> que;

	for(int i = 1; i < m + 1; i++){
		for(int x: work[i])que.push(x);
		if(!que.empty()){
			ans += que.top();
			que.pop();
		}
		
	}
	cout << ans << endl;
	return 0;
}
