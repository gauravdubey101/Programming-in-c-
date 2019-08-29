#include<bits/stdc++.h>
using namespace std;
int firstIndex(int input[] ,int size,int x){
	if(size == 0){
		return -1;
	}
	if(input[0] == x){
		return 0;
		
	}
	int ans = firstIndex(input+1,size-1,x);
	if(ans == -1){
		return -1;
	}
	else{
		return ans+1;//bcz intput+1 have 0 index;
	}
}

int main(){
	int input[] = {1,2,3,4,5};
	int size = sizeof (input)/sizeof (input[0]);
	
}
