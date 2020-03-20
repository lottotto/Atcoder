#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int N,H;
  vector<int> a;
  vector<int> b;
  cin >> N >> H;
  int amax=0;
  int ia, ib;
  for(int i=0;i<N;i++){
    cin >> ia >> ib;
    a.push_back(ia);
    b.push_back(ib);
    amax = max(amax, ia);
  }
  sort(b.begin(), b.end());
  int count = 0;
  for(int i=N-1; i<N && b[i] > amax;i--){
    H -= b[i];
    count += 1;
    if(H<=0){
      cout << count <<endl;
      return 0;
    }
  }
  if(H%amax == 0){
    int ans = H/amax  + count;
    cout << ans<< endl;
  }else{
    int ans = H/amax+1  + count;
    cout << ans<< endl;
  }
  return 0;

}
