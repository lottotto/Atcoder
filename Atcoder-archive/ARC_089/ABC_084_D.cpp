#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

bool isPrime(int x){
  if(x < 2){
    return false;
  }

  for(int i=2;i*i <= x;i++){
    if(x%i == 0)
    return false;
  }
  return true;
}

int main(){
  int Q,l,r;
  int count = 0;
  cin >> Q;
  for(int i=0;i<Q;i++){
    cin >> l >> r;
    for(int i=l/2; i<=r/2; i++){
      //cout << "Check Number is " << i+1 << 2*i+1 << endl;
      //cout << isPrime(i+1) << isPrime(2*i+1)<<endl;
      if(isPrime(i+1) && isPrime(2*i+1)){
        count += 1;
      }
    }
    cout << count << endl;
    count = 0;
  }
}
