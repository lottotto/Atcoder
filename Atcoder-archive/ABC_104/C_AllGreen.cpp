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

int d,g;
int p[20],c[20];

int main(){
  std::cin >> d >> g;
  rep(i,1,d+1){
    std::cin >> p[i] >> c[i];
  }
  int res = MAX;
  rep(i,0,(1<<d)){
    int score = 0;int tmp = 0;
    rep(j,1,d+1){
      if(i&(1<<(j-1))){
        score += 100*p[j]*j+c[j];
        tmp += p[j];
      }
    }
    // std::cout << score << '\n';
    if(score>=g)res = min(tmp, res);
    else{
      per(j,1,d+1){
        if(score >= g)break;
        if(!(i&(1<<(j-1)))){
          int hoge = p[j];
          while(hoge){
            score += 100*j;
            tmp += 1;
            if(score >= g)break;
            hoge -= 1;
          }
        }
      }
      res = min(tmp, res);
    }
  }
  std::cout << res << '\n';
}
