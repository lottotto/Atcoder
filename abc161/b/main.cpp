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

int n,m;
int main(){
    cin >> n >> m;
    vector<ll> a(n);
    double sum = 0; // ここ重要。int型だと小数が落ちる。
    rep(i,0,n){
        cin >> a[i];
        sum += a[i];
    }
    sort(all(a));
    reverse(all(a));
    string ans = "Yes";
    rep(i,0,m){
        if(a[i] < sum/(4*m))ans = "No";
    }
    cout << ans << endl;
}
