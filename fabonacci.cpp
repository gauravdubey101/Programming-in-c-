#include <iostream>
using namespace std;
int fab(int n){
	if(n==0){
		return 0;
		
	}
	if(n==1){
		return 1;
		
	}
	int smallout = fab(n-1);
	int smallout1 = fab(n-2);
	return smallout+smallout1;
	
	}
int main(){
	cout <<fab(10)<<endl;
}
