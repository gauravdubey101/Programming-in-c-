#include<bits/stdc++.h>
using namespace std;

int sum(int a[],int size ,int si = 0){
	int ans =0;
	for(int i = si; i<size;i++){
		ans = ans+a[i];
	}
	return ans;
}
int sum2(int a,int b=0,int c=0 ,int d=0){
	return a+b+c+d;
}



int main(){
	int a[5];
	for(int i = 0;i<5;i++){
		cin >>a[i];
		
}
		cout <<sum(a,30)<<endl;
		
	
	
	
	
	
}
