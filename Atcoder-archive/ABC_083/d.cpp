#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <complex>

using namespace std;
typedef long long ll;

int main(){
  string s;
  cin >> s;
  char b = s[0];
  ll maxL = s.size();
  for(auto i=1;i<s.size();i++){
    //違う部分を探す。
    if(s[i] != b){
      auto l = max(i, int(s.size() - i) );
      maxL = min(maxL,l)
      b = s[i]
    }
  }
}
