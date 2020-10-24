#include<bits/stdc++.h>
//function prototype
using namespace std;

//function prototype

//type function-name(argument)
 
//int sum(int a,int b);  //--> Acceptable
//int sum(int a,b) //--> Not Acceptable
int sum(int,int); //--> Acceptable

int main(){
	int num1,num2;
	cout<<"enter the first value"<<endl;
	cin>>num1;
	cout<<"enter the second value"<<endl;
	cin>>num2;
	
	cout<<"The sum is "<<sum(num1,num2);
	
	
	
	return 0;
	
}

int sum(int a,int b){
	int c = a+b;
	return c;
}
