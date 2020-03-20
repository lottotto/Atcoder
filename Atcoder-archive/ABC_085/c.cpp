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

#define rep(i, a, n)  for(int i=a; i<=n; i++)
#define per(i, a, n)  for(int i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MAX 1000001
using namespace std;
typedef long long ll;

int main(){
  int n; cin>>n;
  int y; cin>>y;
  rep(i,0,n){
    rep(j,0,n-i){
      int k = n-i-j;
      if(10000*i+5000*j+1000*k==y){
        std::cout <<i<<' '<<j<<' '<<k << '\n';
        return 0;
      }
    }
  }
  std::cout <<"-1 -1 -1"<< '\n';
}
