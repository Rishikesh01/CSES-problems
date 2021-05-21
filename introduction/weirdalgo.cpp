#include<iostream>
#include<vector>
using namespace std;

vector<long> arr;
vector<long> solve(long n){
  while(n!=0)
  { 
    arr.push_back(n);
    if(n == 1)
      return arr;
    
   if(n%2==0)
      n=n/2;
    else
      n=(n*3)+1;
    
  
  }
  return arr;
}

int main(){
  long  n ;
  cin>>n;
  solve(n);
  for(uint i = 0;i<arr.size();i++){
    cout << arr[i]<<" ";
  }
return 0;
}
