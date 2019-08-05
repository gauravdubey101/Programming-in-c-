#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >>n;
	int arr[n];
	int even =0;
	int odd=0;
	for(int i = 0;i<n;i++)
	{
		cin>>arr[i];
		if(i%2==0){
		
		if((arr[i]%2)==0)
		{
			even =even+arr[i];
		}
		
		
	}else
	{
		if((arr[i]%2)!=0)
		{
		
		odd = odd+arr[i];
	}
	}
	
		
	}
/*	for(int i =0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}*/
	cout <<even <<" "<<odd;
}
