#include<bits/stdc++.h>

using namespace std;

int main(){
	int a =3;
	int* b = &a;
	cout<<"Address of a:"<<b<<endl;
	cout<<"Address of a:"<<&a<<endl;
	cout<<"valaue of a:"<<a<<endl;
	
	
	//derefance  operator
	cout<<"Value of a:"<<*b<<endl;
	
	int**c = &b;
	
	cout<<"Address of b :"<<&b<<endl;
	cout<<"address of b :"<<c<<endl;
	cout<<"the value of c is :"<<*c<<endl;
	cout<<"the value at address value_at(value_at(c))is: "<<**c<<endl;
	
	
	return 0;
}
