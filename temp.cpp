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
typedef pair<ll ,ll> P;
const ll mod = 1e9+7;
const long double EPS = 0.0000000001;

int n, q;
string s;
int main(){
	cin >> n;
	cin >> s;
	cin >> q;
	
	// アルファベットの数に対応したsetのvectorを用意する.
	// is[0]のsetにはaが現れる位置を持たせておく。
	// set は insert とサーチが高速;
	vector<set<int>> is(26); 
	for(int i = 0; i < n; i++)is[s[i] - 'a'].insert(i);
	rep(qi, 0 ,q){
		int type;
		cin >> type;
		if(type == 1){
			int iq; char cq;
			cin >> iq >> cq;
			iq--;
			is[s[iq] - 'a'].erase(iq);
			s[iq] = cq;
			is[cq - 'a'].insert(iq);
			
		}else {
			int lq, lr;
			cin >> lq >> lr;
			lq--;
			int ans = 0;
			for(int j = 0; j < 26; j++){
				auto itr = is[j].lower_bound(lq);
				if(itr != is[j].end() and *itr < lr )ans++;
			}
			cout << ans << endl;
		}
	}

}
