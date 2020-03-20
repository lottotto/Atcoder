#include<bits/stdc++.h>

#define rep(i, a, n)  for(int i=a; i<n; i++)
#define per(i, a, n)  for(int i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MAX 1000000001;
using namespace std;
typedef long long ll;

ll n,m;

int main(){
 std::cin >> n >> m;
 if(n==1&&m==1){
   std::cout << "1" << '\n';
 }else if(n==1){
   std::cout << m-2 << '\n';
 }else if (m==1){
   std::cout << n-2 << '\n';
 }else{

   ll corner = 4;
   ll edge = 2*(m+n) -2*corner;
   ll normal = n*m - corner- edge;
   std::cout <<(m-2)*(n-2) << '\n';
 }
}
