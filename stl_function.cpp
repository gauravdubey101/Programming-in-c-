#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
	
	int arr[] ={1,3,2,5,7,6};
	sort(arr+2,arr+6);
	for(int i = 0;i<6;i++){
		cout<<arr[i]<<" ";
	}
}
