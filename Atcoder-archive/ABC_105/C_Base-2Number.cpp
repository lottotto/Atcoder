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
string s;

int main(){
  std::cin >> n;
  if(n==0)s="0";
  while(n){
    if(n%-2 != 0){
      s = "1"+s;
      n--;
    }
    else s="0"+s;
    n /= -2;
  }
  std::cout << s << '\n';
  // reverse(s, s+keta);
  // std::cout << s << '\n';
}
