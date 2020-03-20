#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<map>
#include<numeric>
#include<set>
#include<string>
#include<utility>
#include<vector>

#define rep(i, a, n)  for(int i=a; i<n; i++)
#define per(i, a, n)  for(int i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MAX 1000001
using namespace std;
typedef long long ll;


int main(){
  int n;cin >> n;
  int ans = MAX;
  rep(i,0,n+1){
    int cc = 0;
    int t = i;
    while(t > 0){
      cc += t%6;
      t /= 6;
    }
    t = n-i;
    while (t>0) {
      cc += t%9;
      t /= 9;
    }
    ans = min(ans, cc);
  }
  std::cout << ans << '\n';

}
