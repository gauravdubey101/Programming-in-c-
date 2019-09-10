#include<bits/stdc++.h>
using namespace std;

int main()
{
	int imput;
	
	cin >> imput; //reads the first number 

	while(imput != 42) //Print out number that we just checked is NOT 42
	{
		cout << imput << endl;
		cin >> imput;
	}
	

	return 0;
}
