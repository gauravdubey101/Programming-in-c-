#include<bits/stdc++.h>
using namespace std;
void findIndex(int input[],int currIndex,int size,int x,int output[],int &k){
	if(currIndex ==size)
	return;
	if(input[currIndex] ==x){
		output[k]==currIndex;
		k++;
	}
	findIndex(input,currIndex+1,size,x,output,k);
}
int allIndex(int input[],int size, int x,int output[]){
	int k=0;
	findIndex(input,0,size,x,output,k);
	return k;
	
}

