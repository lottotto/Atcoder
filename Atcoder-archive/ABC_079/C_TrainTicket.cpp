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

#define rep(i, a, n)  for(int i=a; i<n; i++)
#define per(i, a, n)  for(int i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MAX 1000001
using namespace std;
typedef long long ll;

string s;
std::vector<char> v(3,'0');

int main() {
  std::cin >> s;
  rep(i, 0, 1<<(s.size()-1)){
    int tmp = s[0]-'0';
    rep(j,1,s.size()){
      if(i&(1<<(j-1))){
        tmp += s[j]-'0';
        v[j] = '+';
      }
      else{
        tmp -= s[j]-'0';
        v[j] = '-';
      }
    }
    if(tmp==7){
      std::cout << s[0];
      rep(i,1,4){
        std::cout << v[i]<<s[i];
      }
      std::cout <<"=7" << '\n';
      break;
    }
  }
  return 0;
}
