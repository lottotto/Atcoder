#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  int N,C;
  int s[100000], t[100000],c[100000];
  int temp_channel[200002], integrate_channel[200002];


  cin >> N >> C;
  for(int i=0;i<N;i++){
    cin >> s[i] >> t[i] >> c[i];
  }
  for(int i=0;i<200002;i++){
    integrate_channel[i] = 0;
  }
  //cout << "hogehoge"<< endl;
  for(int i=1;i<=C;i++){
    //まずはtemp_channelの初期化
    for(int j=0;j<200002;j++){
      temp_channel[j] = 0;
    }
    //録画始まりの時間を+1, 終わりの時間を-1する(将来は累積和をとる。)
    //もし連続して予約したい番組もこれでケア可能。
    for(int j=0;j<N;j++){
      if(c[j]==i){
        temp_channel[2*s[j]-1]++;
        temp_channel[2*t[j]]--;
      }
    }
    //チャンネルiについて累積和を計算
    for(int j=1;j<200002;j++){
      temp_channel[j] += temp_channel[j-1];
      //cout << "i:" <<j<< "    temp_channel:" << temp_channel[j] << endl;
    }
    //チャンネル統合枠にぶちこみ
    for(int j=0;j<200002;j++){
      if(temp_channel[j] > 0){
        integrate_channel[j]++;
      }
    }
  }
  //integrate_channelの最大値を探す。
  int mx=0;
  for(int i=0;i<200002;i++){
    if(mx < integrate_channel[i]){
      mx = integrate_channel[i];
    }
  }
  cout << mx << endl;
}
