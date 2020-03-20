#include<bits/stdc++.h>

#define rep(i, a, n)  for(int i=a; i<n; i++)
#define per(i, a, n)  for(int i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MAX 1000000001;
using namespace std;
typedef long long ll;

int n,t,a;
int h[10000];

int main(){

  std::cin >> n >> t >> a;
  //floatではなく1000倍すれば整数になるので、そっちを利用すること
  float res = MAX;
  int res_ans;
  rep(i,1,n+1){
    std::cin >> h[i];
    float temp = t-(h[i]*0.006);
    if(abs(a - temp) < res){
      res = abs(temp - a);
      res_ans = i;
    }
  }
  std::cout << res_ans << '\n';
}
