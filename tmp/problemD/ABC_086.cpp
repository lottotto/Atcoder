#include<iostream>
using namespace std;

int main() {
  int N,K;
  cin >> N >> K;
  //int x[N], y[N], c[N];
  int table[2*K][2*K];
  int temp_x, temp_y;
  char temp_c;
  for(int i=0;i<N;i++){
    cin >> temp_x >> temp_y >> temp_c;
    if(temp_c == 'W'){
      temp_y += K;
    }
    table[temp_x%(2*K)][temp_y%(2*K)]++;
  }
  //累積和
  for(int i=1; i<=2*K; i++) {
        for(int j=1; j<=2*K; j++) {
            table[i][j] += table[i][j-1];
        }
    }

    for(int j=1; j<=2*K; j++) {
        for(int i=1; i<=2*K; i++) {
            table[i][j] += table[i-1][j];
        }
    }
    //5箇所の面積をとる
    int ma = -(1 << 25);
    for(int i=0; i<=K; i++) {
        for(int j=0; j<=K; j++) {
            int a = table[i][j];
            int b = table[i+K][j+K] - table[i+K][j] - table[i][j+K] + table[i][j];
            int c = table[2*K][j] - table[i+K][j];
            int d = table[i][2*K] - table[i][j+K];
            int e = table[2*K][2*K] - table[2*K][j+K] - table[i+K][2*K] + table[i+K][j+K];
            int tmp = a + b + c + d + e;
            ma = max(ma, max(tmp, N - tmp));
        }
    }
    cout << ma << endl;
  return 0;
}
