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

int n;


int main(){
	cin >> n;
	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	vector<int> temp(n);
	temp = a;
	sort(all(temp));
	int maxA = temp[n-1];
	int secondA = temp[n-2];

	for(int i=0; i < n; i++){
		if (maxA == a[i]){
			cout << secondA << endl;
		}else{
			cout << maxA << endl;
		}
	}
	return 0;
}