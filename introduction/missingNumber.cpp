#include<iostream>
using namespace std;
long solve(long arr[],long size){
  long n=size;

    for(long i = 0;i<size;i++){
    n ^=i^arr[i];
  }
  return n;
}

int main( ){
  long  n;
  cin>>n;
  long *arr = new long[n-1];
  for(long i =0;i<n-1;i++){
    cin>> arr[i];
  }
 
  cout<< solve(arr,n)<<endl;
  return 0;

}
