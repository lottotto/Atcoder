#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;

int main(){
  int N;
  cin >> N;
  ll a[N];
  ll b[N];
  ll temp_a[N], temp_b[N];

  for(int i=0;i<N;i++){
    cin >> a[i];
  }
  for(int i=0; i<N;i++){
    cin >> b[i];
  }
  ll ans = 0;

  for(int k =0; k<30;k++){
    ll t = 1 << k;
    //cout << t <<endl;
    for(int i =0; i<N; i++){
      temp_a[i] = a[i] % (2*t);
      temp_b[i] = b[i] % (2*t);
    }
    sort(temp_b, temp_b+N);
    ll cnt = 0;
    for(int i=0;i<N;i++){
      //ソートされたtemp_bから4t-a[i]以上の値が現れる最初の位置 - 3t-a[i] 以上の値が現れる最初の位置　= 3t-a[i] ~ 4t-a[i]の間にあるbの個数
      cnt += lower_bound(temp_b, temp_b+N, 4*t-temp_a[i]) - lower_bound(temp_b, temp_b+N, 3*t-temp_a[i]);
      cnt += lower_bound(temp_b, temp_b+N, 2*t-temp_a[i]) - lower_bound(temp_b, temp_b+N, 1*t-temp_a[i]);
    }
    //cout<<cnt<<endl;
    ans += (cnt%2)*t;
  }
  cout << ans << endl;
  return 0;
}
