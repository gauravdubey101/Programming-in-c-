#include<bits/stdc++.h>
using namespace std;
bool is_sorted(int a[] ,int size){
	if(size ==0 ||size ==1){
		return true;
		
	}
	if(a[0]>a[1]){
		return false;
		
	}
	

bool issmallersorted = is_sorted(a+1,size - 1);
return issmallersorted;
}
int main(){
	
}
