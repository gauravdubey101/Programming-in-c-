#include<bits/stdc++.h>
using namespace std;

int main()
{
	int* p = new int;
	*p = 10;
	cout <<*p<<endl;
	
	int *pd = new int[50];
	int n;
	cin >>n;
	
	int* pd2 = new int[n];
	
	pd2[0]=10;
	cout <<*(pd2)<<endl;
}
