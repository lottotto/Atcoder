#include<bits/stdc++.h>

#define rep(i, a, n)  for(int i=a; i<n; i++)
#define per(i, a, n)  for(int i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MAX 1e18
using namespace std;
typedef long long ll;

long double t,x;
int main(){
  std::cin >> t >> x;
  long double res = t/x;
  std::cout <<setprecision(10)<< res << '\n';
}
