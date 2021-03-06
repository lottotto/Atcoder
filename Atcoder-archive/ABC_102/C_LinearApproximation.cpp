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


int main(){

  int n;std::cin >> n;
  int b[n];
  rep(i,0,n){
    std::cin >> b[i];
    b[i] -= (i+1);
  }
  sort(b,b+n);
  ll res=0;
  rep(i,0,n){
    res += abs(b[i]-b[n/2]);
  }
  std::cout << res << '\n';

}
