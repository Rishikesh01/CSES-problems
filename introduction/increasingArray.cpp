#include<iostream>
using namespace std;

long solve(long arr[],long length){
long prev = arr[0];
long  moves = 0;
for(long i = 1;i<length;i++){
  moves += max(0L,prev - arr[i]);
  prev = max(arr[i],prev);
}
return moves;
}


int main(){
long  n;
cin >> n;
long *arr = new long[n];
for(long i = 0;i<n;i++)
  cin>>arr[i];
cout<<solve(arr,n);
return 0;
}

