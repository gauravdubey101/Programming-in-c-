#include<bits/stdc++.h>

using namespace std;

int main(){
	int marks[4] = {23,45,78,89};
//	for(int i =0;i<4;i++){
//		cout<<marks[i]<<endl;
//	}
//cout<<marks[0]<<endl;
//cout<<marks[1]<<endl;
//cout<<marks[2]<<endl;
//cout<<marks[3]<<endl;

//pointers and array
int* p = marks;
cout<<"The value of markes[0] :"<<*p<<endl;
cout<<"The value of markes[0] :"<<*(p+1)<<endl;
cout<<"The value of markes[0] :"<<(*p+1)<<endl;
cout<<"The address of markes[0] :"<<p<<endl;
cout<<"The address of markes[0] :"<<&marks[0];
}
