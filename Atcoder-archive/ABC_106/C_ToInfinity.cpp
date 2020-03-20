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

ll k;
string s;
string res;
string hoge;

int main(){
  std::cin >> s;
  std::cin >> k;
  res = "1";
  rep(i,0,s.size()){
    hoge = s[i];
    if(hoge!=res){
      res = hoge;
      break;
    }
    if(k==(i+1))break;
  }
  std::cout << res << '\n';
}
