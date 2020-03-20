#include<bits/stdc++.h>

#define rep(i, a, n)  for(int i=a; i<n; i++)
#define per(i, a, n)  for(int i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MAX 1e18
using namespace std;
typedef long long ll;

int a,b,q;
vector <ll> s, t;

int main(){
  std::cin >> a >> b >> q;
  s.push_back(-MAX);t.push_back(-MAX);
  rep(i,1,a+1){
    ll tmp_s;
    std::cin >> tmp_s;
    s.push_back(tmp_s);
  }
  rep(i,1,b+1){
    ll tmp_t;
    std::cin >> tmp_t;
    t.push_back(tmp_t);
  }
  s.push_back(MAX);t.push_back(MAX);
  sort(all(s));sort(all(t));

  rep(i,0,q){
    ll x;
    std::cin >> x;
    ll s1 = *lower_bound(all(s),x);
    ll s2 = *(lower_bound(all(s), x)-1);
    ll t1 = *lower_bound(all(t),x);
    ll t2 = *(lower_bound(all(t), x)-1);
    ll res = MAX;
    res = min(res, abs(s1-x)+abs(t1-s1));
    res = min(res, abs(s1-x)+abs(t2-s1));
    res = min(res, abs(s2-x)+abs(t1-s2));
    res = min(res, abs(s2-x)+abs(t2-s2));
    res = min(res, abs(t1-x)+abs(s1-t1));
    res = min(res, abs(t1-x)+abs(s2-t1));
    res = min(res, abs(t2-x)+abs(s1-t2));
    res = min(res, abs(t2-x)+abs(s2-t2));
    std::cout << res << '\n';
  }
}
