#include<bits/stdc++.h>
using namespace std;

int checknumber(int input[],int size,int x){
	if(size == 0){
		return false;
		
	}
	if(input[0] ==0)
	{
		return true;
	}
	return checknumber(input+1,size-1,x);
	
}

int main(){
	int input[] = {01,2,2,};
	int n = sizeof (input)/sizeof (input[0]);
	cout<<"found";
}
