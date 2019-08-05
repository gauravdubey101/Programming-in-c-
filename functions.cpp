#include<bits/stdc++.h>
using namespace std;

bool canDistributedEqually(int fruits)
{
	if((fruits%11)==1)
	{
		return true;
		
	}else
	return false;
	
}

int main()
{
	int fruits;
	cin >> fruits;
	int fulmoons = 0;
	while(!canDistributedEqually(fruits))
	{
		fulmoons+=1;
		fruits = 2*fruits;
	}
	cout<<fulmoons<<"  "<<fruits<<endl;
}
