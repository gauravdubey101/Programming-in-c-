#include<bits/stdc++.h>
using namespace std;

void f(int * z){
	(*z)++;
}
void g(const int &a){
	//a++;
	
}
int main(){
	int const i = 10;
	int const * p = &i;
	
	int j =10;
	int const *k =&j;
	j++;
	
	int i2 = 12;
	int *p3 = &i2;
	f(p3);
	g(i2);
	
	// benifits of by referance passing is :
	// changeable and not forming copy. 
int ip =10;
int j2 =21;
int const * pp = &ip;
pp = &j	;

int * const p2 = &ip;
(*p2)++;
//p2 = &j;
int const *const ppp = 12;
//p3 = &j2;
//(*p3)++;
}
