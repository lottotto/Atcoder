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
#include<queue>

#define rep(i, a, n)  for(int i=a; i<n; i++)
#define per(i, a, n)  for(int i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MAX 1000001
using namespace std;
typedef long long ll;

int n;
int t[5];
int a,b;

int main(){
  std::cin >> n;
  rep(i,1,n+1){
    std::cin >> t[i];
  }
  int res=MAX;
  rep(i,0,(1<<n)){
    int a=0;
    int b=0;
    rep(j,0,n){
      if(i&(1<<j))a+=t[j+1];
      else b+=t[j+1];
    }
    // std::cout << a<< ' '<<b << '\n';
    res = min(max(a,b), res);
  }
  std::cout << res << '\n';
}
