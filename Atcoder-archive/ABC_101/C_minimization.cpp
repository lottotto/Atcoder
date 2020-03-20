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
int a[100100];

int main(){
  std::cin >> n >> k;
  int one;
  rep(i,1,n+1){
    std::cin >> a[i];
    if(a[i]==1)one=i;
  }
  int left = one-1;
  int right = n-one;
  int res = 0;

  int ans = (n-1)/(k-1);
  if((n-1)%(k-1)!=0)ans++;
  std::cout << ans << '\n';
}
