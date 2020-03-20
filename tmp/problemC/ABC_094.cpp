#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  int N;
  cin >> N;
  int x[N];
  for(int i=0;i<N;i++){
    cin >> x[i];
  }
  int sort_x[N] = sort(x,x+N);

}
