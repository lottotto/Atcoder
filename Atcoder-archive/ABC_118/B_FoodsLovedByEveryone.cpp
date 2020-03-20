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

int n,m;
int k,a;
int food[50];

int main(int argc, char const *argv[]) {
  std::cin >> n >> m;
  rep(i,0,n){
    std::cin >> k;
    rep(j,0,k){
      std::cin >> a;
      food[a]++;
    }
  }
  int res = 0;
  rep(i,0,50){
    if(food[i] == n)res++;
  }
  std::cout << res << '\n';
  return 0;
}
