#include<bits/stdc++.h>
using namespace std;
int main(){
	//constant int
	const int i=10;
	int const j=12;
	//constant referance from non constant  int
	
	cout <<i;
	int z =10;
	const int & k = z;
	
	z++;
	//comstant referances 
	int const k2 = 12;
	int const &p = k2;
	//referance from constant int
	int const k3 = 123;
	
	
	
}
