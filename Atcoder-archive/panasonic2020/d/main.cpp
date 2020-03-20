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

int n;

void dfs(string s, char mx){
    if (s.size()== n)cout << s << endl;
    else {
        for(char c = 'a'; c <= mx; c++){
            if(c != mx) dfs(s+c, mx);
            else  dfs(s+c, mx+1);
        }
    }
}
int main(){
    cin >> n;
    dfs("", 'a');
}