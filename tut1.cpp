#include<bits/stdc++.h>

using namespace std;


	
//	struct employee{
//		int eId;
//		char favChar;
//		float salary;
//	};
			
	typedef struct employee{
		int eId;  //4 
		char favChar; //1
		float salary; //4
	}ep;
		
//in unioun only one data type can use at a time. 		
	union money
	{
		int rice; //4 inly 4 bytes use for each data type
		char favcar; //1
		float pounds; //4
		};
		
		
		
	
	int main(){
		ep gaurav;
		union money m1;
		m1.rice=344;
		cout<<"rice is:"<<m1.rice;
		
		
		/* structure*/
//		struct employee gaurav1;
//		struct employee gaurav2;
//		gaurav.eId=1;
//		gaurav.favChar = 'G';
//		gaurav.salary = 12000000;
//		
//		
//		cout<<"Slaray is :"<<gaurav.salary<<endl;
//		cout<<"emp id is: "<<gaurav.eId<<endl;
//		cout<<"emp favchar :"<<gaurav.favChar;
		
		return 0;
}
