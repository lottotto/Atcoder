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

long double l;
int main(){
    cin >> l;
    // cout << l/3 << endl;
    long double ans = l/3 * l/3 * l/3;
    cout << fixed;
    cout << setprecision(12)<< ans << endl;
    // printf("%.12f",ans);

}
