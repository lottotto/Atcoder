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

string s;

int main(){
  std::cin >> s;
  int res = 700;
  rep(i,0,s.size()){
    if(s[i]=='o')res+=100;
  }
  std::cout << res << '\n';
}
