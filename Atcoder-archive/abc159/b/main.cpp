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

bool iskaibun(string sub){
    // cout << sub << endl;
    int n = sub.size();
    bool ret = true;
    for(int i = 0; i < n; i++){
        if(sub[i] != sub[n-1-i])ret = false;
    }
    return ret;
}

string s;
int main(){
    cin >> s;
    int n = s.size();
    string ans = "Yes";
    if(!iskaibun(s.substr(0,n)))ans = "No";
    // cout << ans << endl;
    if(!iskaibun(s.substr(0,(n-1)/2)))ans = "No";
    // cout << ans << endl;
    // cout << n-(n+3)/2 << endl;
    if(!iskaibun(s.substr((n+3)/2-1,n-(n+3)/2+1)))ans = "No";
    cout << ans << endl;
}