#include<bits/stdc++.h>

#define rep(i, a, n)  for(int i=a; i<n; i++)
#define per(i, a, n)  for(int i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define LONGMAX 1e18
#define INTMAX 1e9
using namespace std;
typedef long long ll;

int n,m;
vector <string> s, t;

int main(){
  std::cin >> n;
  rep(i,0,n){
    string tmp;
    std::cin >> tmp;
    s.push_back(tmp);
  }
  std::cin >> m;
  rep(i,0,m){
    string tmp;
    std::cin >> tmp;
    t.push_back(tmp);
  }
  int res = 0;
  rep(i,0,n){
    int tmp = 0;
    rep(j,0,n){
      if(s[j] == s[i])tmp++;
    }
    rep(j,0,m){
      if(t[j] == s[i])tmp--;
    }
    res = max(tmp, res);
  }
  std::cout << res << '\n';
}
