#include<bits/stdc++.h>

#define rep(i, a, n)  for(ll i=a; i<n; i++)
#define per(i, a, n)  for(ll i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define LONGMAX 1e18
#define INTMAX 1000000000
using namespace std;
typedef long long ll;
typedef pair<ll,ll> p;

int a,b,c,d,e,k;
vector<int> v;

int main(){
  for(int i=0;i<5;i++){
    int tmp;
    cin >> tmp;
    v.push_back(tmp);
  }
  cin >> k;
  for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
      if(v[j]-v[i]>k){
        cout << ":(" << endl;
        return 0;
      }
    }
  }
  cout << "Yay!" << endl;
  return 0;

}