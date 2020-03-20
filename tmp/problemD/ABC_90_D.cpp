#include<iostream>
using namespace std;

//あまりがaのものを返す関数
int calc(int N, int a){
  int ret = 0;
  for(int i=1;i<=N;i++){
    if(N%i==a){
      ret++;
    }
  }
  return ret;
}
int main(){
  int N,K;
  cin >> N >> K;
  //cin >> K;
  cout << N <<" " << K << endl;
  return 0;
}
