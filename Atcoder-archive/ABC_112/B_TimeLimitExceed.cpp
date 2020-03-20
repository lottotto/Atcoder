#include<bits/stdc++.h>

#define rep(i, a, n)  for(int i=a; i<n; i++)
#define per(i, a, n)  for(int i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MAX 1000000001;
using namespace std;
typedef long long ll;

int n,T;

int main(){
  std::cin >> n >> T;
  int res = MAX;
  int res_ans = 0;
  int c, t;
  rep(i,1,n+1){
    std::cin >> c >> t;
    if(t <= T && c<res){
      res = c;
      res_ans = i;
    }
  }
  if(res_ans != 0){
    std::cout << res << '\n';
  }else{
    std::cout << "TLE" << '\n';
  }

}
