#include<bits/stdc++.h>
using namespace std;

int main(){
	float  n;
	float amt;
	cin >>n>>amt;
	if((int)n%5!=0||n+0.50>amt){
		
		
		cout<<fixed <<setprecision(2)<<amt;
	}
	else{
	    amt = amt-n-0.5;
		cout <<fixed<<setprecision(2)<<amt;
	}

}
