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


vector<ll> bfs(int n){
    queue<ll> q;
    vector<ll> ret;
    int count = 0;
    for(int i = 1; i < 10; i++){
        q.push(i);
        ret.push_back(i);
        count++;
        if(count == n)return ret;
    }
    while(1){
        ll now = q.front(); q.pop();
        // string now = to_string(top);
        // char c = now[now.size()-1];
        for(int i = -1; i < 2; i++){
            ll check = now % 10 + i;
            if(check == -1 or check  == 10)continue;
            q.push(now * 10 + check);
            ret.push_back(now * 10 + check);
            count++;
            if(count == n)return ret;
        }
    }
}
int main(){
    int k; cin >> k;
    vector<ll>v = bfs(k);
    // // for(int i = 0; i < v.size(); i++)cout << v[i] << " ";
    // cout << endl;
    cout << v[k-1] << endl;
}
