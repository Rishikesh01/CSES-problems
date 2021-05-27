#include <iostream>
using namespace std;

void solve(long n ){
  if (n == 1){
		cout << "1" << endl;

	}
	else if (n == 3 || n == 2){
		cout << "NO SOLUTION" << endl;
	}
	else{
		  if(n % 2 == 0){
			  for(long i=2; i<=n;i=i+2){
				  cout << i << " ";
			  }
			  for(long j = 1;j<=n-1;j=j+2){
				  cout << j << " ";
			  }
		  }
		  else{
			  for(long i=1;i<=n;i=i+2){
				  cout << i << " ";
			  }
			  for(long j=2;j<=n-1; j=j+2){
				  cout << j << " ";
			  }
		  }

	  }
}

int main(){
  long n;
  cin>>n;
  solve(n);
  return 0;
}
