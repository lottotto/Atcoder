#include<iostream>
using namespace std;

int main(){
  int N,K;
  cin >> N >> K;
  long long ans = 0;
  for(int b=1;b<=N;b++){
    int p = N/b;
    int r = N%b;
    ans += p * max(0, b-K);
    ans += max(0, r-K+1);
  }
  if(K ==0){
    ans -= N;
  }
  cout << ans << endl;
  return 0;
}
