#include<bits/stdc++.h>
using namespace std;

int main(){
 int n;
 int N;
 cin >>n;
 for(int i =1;i<=n;i++){
	cin >>N;
	if(N%2==0){
		cout<<"YES"<<endl;
	}
	else{
		N = 3*N+1;
		cout<<"yes"<<endl;
	}

 }
}
