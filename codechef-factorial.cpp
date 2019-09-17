#include<bits/stdc++.h>
using namespace std;

	
	int main(){
		int t;
		int n;
		int fact = 1;
		cin >>t;
		while(t--){
			cin >>n;
			for(int i =1;i<=n;i++){
				fact = fact*n;
			}
			cout <<fact<<endl;
		}
	}

