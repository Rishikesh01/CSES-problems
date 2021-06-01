#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll arr[(ll)1e6];

ll solve(ll n){
 memset(arr,0,n+1);
  arr[0]=1;
  for(ll i =1;i<=n;i++){
    for(ll j =1;j<=6;j++){
      if(i-j>=0){
      arr[i]=(arr[i]+arr[i-j]) %(ll) 1000000007;
    
      }
    }
  }
 return arr[n];
}

int main(){
  ll n;
  cin >> n;
  cout << solve(n);
  return 0;
}
