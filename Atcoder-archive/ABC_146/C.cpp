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

ll a,b,x;

int main(){
	cin >> a >> b >> x;
	int left = 0;
	int right = 1e9+1;
	int n;
	// for(int i  = 0; i < 2000; i++){
	while(right - left > 1){
		n = (left + right) / 2;
		// cout << left << " " << n << " " << right <<endl;
		if(x - (a * n + b * (int)(log10(n) + 1)) >= 0){
			left = n;
		} else {
			right = n;
		}
	}
	cout << left << endl;
	return 0;
}