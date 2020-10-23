#include<bits/stdc++.h>

using namespace std;


	
//	struct employee{
//		int eId;
//		char favChar;
//		float salary;
//	};
			
	struct employee{
		int eId;
		char favChar;
		float salary;
	};
		
	
	int main(){
		struct employee gaurav;
		struct employee gaurav1;
		struct employee gaurav2;
		gaurav.eId=1;
		gaurav.favChar = 'G';
		gaurav.salary = 12000000;
		
		
		cout<<"Slaray is :"<<gaurav.salary<<endl;
		cout<<"emp id is: "<<gaurav.eId<<endl;
		cout<<"emp favchar :"<<gaurav.favChar;
		
		return 0;
}
