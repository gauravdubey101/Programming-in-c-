#include<bits/stdc++.h>
using namespace std;



void updateValue(int *p){
    *p = 610 % 255;
}

int main(){
    char ch = 'A';
    updateValue((int*)&ch);
    cout << ch;
}
	/*void increment(int** p){
	
       (**p)++;
}

int main()
{
	int a =10;
	int* p = &a;
	int** q = &p;
	int b = 20;
	*q = &b;
	(*p)++;
	cout <<a<<" "<<b<<endl;

	int a =100;
	int* p = &a;
	int** q = &p;
	int b = (**q)++ + 4;
	cout <<a <<" "<<b<<endl;
	
	
	int a =100;
	int* p = &a;
	int** q = &p;
	int b = (**q)++;
	int* r = *q;
	(*r)++;
	cout <<a <<" "<<b<<endl;
	
	


     
     int num = 10;
     int *ptr = &num;
        increment(&ptr);
        cout << num << endl;

	
		
}*/
