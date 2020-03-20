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
string s;


int main(){
	cin >> s;
	s += "R";
	vector<int>ans(s.size());
	bool flag = true;
	int count;
	for(int i = 0; i < s.size(); i++){

		if(flag and s[i] == 'L'){
			ans[i-1] += (count + 1)/2;
			ans[i] += count / 2;
			// cout << i << " " <<count << endl;
			count = 0;
			flag = false;
			
			// for(int i=0; i < s.size(); i++)cout << ans[i] << " ";
			// cout << endl;
			
		}
		else if (!flag and s[i] == 'R'){
			ans[i-count] += (count + 1)/2;
			ans[i-count-1] += count / 2;
			count = 0;
			flag = true;
			// for(int i=0; i < s.size(); i++)cout << ans[i] << " ";
			// cout << endl;
		}
		count++;
	}
	for(int i=0; i < s.size()-1; i++)cout << ans[i] << " ";
	cout << endl;
	return 0;
}