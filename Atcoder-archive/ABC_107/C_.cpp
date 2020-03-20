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

int n, k;
int start;
int x[100000100];
bool flag;
int pre, nex;
ll tmp;
ll res = MAX;

int main(){
  std::cin >> n >> k;
  rep(i,1,n+1){
    std::cin >> x[i];
    if(x[i] >= 0 && !flag){
      start = i;
      flag = true;
    }
  }
  rep(i,0, (1<<k)){
    pre = start;
    rep(j,0,k){
      if(i&(1<<j)){
        nex = pre+1;
      }else{
        nex = pre-1;
        if(nex <=0)tmp += MAX;
      }
      tmp += abs(x[nex] - x[pre]);
      std::cout << x[nex]<< '-'<< x[pre] << '\n';
      pre = nex;
    }
    res = min(tmp, res);
  }
  std::cout << res << '\n';
}
