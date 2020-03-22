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

ll conb(ll x){
    return x*(x-1)/2;
}

ll n;
int main(){
    cin >> n;
    vector<ll>a(n);
    map<ll,ll>mp;
    rep(i,0,n){
        cin >> a[i];
        mp[a[i]]++;
    }
    map<ll,ll>mp1,mp2;
    rep(i,0,n){
        mp1[a[i]] = conb(mp[a[i]]);
        mp2[a[i]] = conb(mp[a[i]]-1);
    }
    // for(auto x:mp1){
    //     cout << x.first << " " <<x.second << endl;
    // }
    // for(auto x:mp2){
    //     cout << x.first << " " <<x.second << endl;
    // }
    ll sum = 0;
    for(auto x: mp1){
        sum += x.second;
    }
    rep(i,0,n){
        cout << sum - mp1[a[i]] + mp2[a[i]] << endl;
    }
}