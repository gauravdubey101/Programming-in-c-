#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout <<"enter n";
	cin >>n;
	int arr[n];
	int count = 0;
	
	cout <<"enter arry element";
	for(int i=0;i<n;i++)
	{
		cin >>arr[i];
		if((arr[i]%3)==0)
		{
			count++;
		}
	}
	if(count==0)
	{
		cout<<"nothing here"<<endl;
		
	}else
	{
		cout <<count <<endl;
		for(int i =0;i<n;i++)
		{
			if((arr[i]%3)==0)
			{
				cout << i+1 <<" ";
			}
		}
		
	}
	
}
