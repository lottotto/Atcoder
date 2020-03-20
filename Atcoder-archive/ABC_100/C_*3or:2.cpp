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
#include<deque>

#define rep(i, a, n)  for(int i=a; i<n; i++)
#define per(i, a, n)  for(int i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MAX 1000000001
using namespace std;
typedef long long ll;

int n;
int a[10100];
int check[10100];

int main(){
  std::cin >> n;
  rep(i,1,n+1){
    std::cin >> a[i];
    check[i] = 0;
  }
  int res = 0;
  rep(i,1,n+1){
    for(ll j=2;j<MAX;j++){
      // std::cout << i<<' '<<a[i] <<' '<<j<< '\n';
      if(a[i]%2==0){
        res +=1;
        a[i] /= 2;
      }else{
        break;
      }
    }
  }
  std::cout << res << '\n';
}
