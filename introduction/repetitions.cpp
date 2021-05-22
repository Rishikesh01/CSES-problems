#include<iostream>
using namespace std;
long  solve(string str){
char last =str.at(0);
long count = 0,maxCount=1;
  for(long i = 0;i<str.length();i++){
    if(str.at(i)==last){
      ++count;
      maxCount=max(count,maxCount);
    }
    else{
      last = str.at(i);
      count =1;
    }
  }
  return maxCount;
}
int main(){
  string str;
  cin>>str;
  cout<<solve(str);
  return 0;
}
