#include<bits/stdc++.h>
using namespace std;
int lastIndex(int input[],int size,int x){
	if(size ==0){
		return -1;
	}
	int ans = (input+1,size-1,x);
	if(ans != -1){
		return ans+1;
	}
	if(input[0] ==x){
		return 0;
	}
	else{
		return -1;
	}
		
	
}

int main(){
	int input[] ={1,2,3,4};
	int size = sizeof(input)/sizeof(input[0]);
	int x;
	cin >>x;
	lastIndex(input,size,x);
}
