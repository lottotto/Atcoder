#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <complex>
using namespace std;

int main() {
  string s;
  int x,y;
  int F=0,T=0;
  cin >> s;
  cin >> x >> y;
  vector<char> S;
  for(int i=0;i<s.size();i++){
    if(s[i] == 'F'){
      F++;
    }else{
      T++;
    }
  }
  if(x==0||y==0){

  }
  
  cout << F << T;

  return 0;
}
