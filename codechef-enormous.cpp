#include<bits/stdc++.h>
using namespace std;

int main(){
	long n;
	long k;
	long t;
	long count = 0;
	cin >>n;
	cin >>k;
	for(int i =0;i <n;i++){
	   cin >>t;
	   if(t%k == 0){
	   	count++;
	   }
			 
		}
		cout <<count;
		return 0;
	}
	
	

