#include<bits/stdc++.h>

#define rep(i, a, n)  for(int i=a; i<n; i++)
#define per(i, a, n)  for(int i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define LONGMAX 1e18
#define INTMAX 1e9;
using namespace std;
typedef long long ll;

int a,b,c;
int main(){
  std::cin >> a >> b >> c;
  int res = MAX;
  res = min(res, a*b/2);
  res = min(res, b*c/2);
  res = min(res, c*a/2);
  std::cout << res << '\n';
}
