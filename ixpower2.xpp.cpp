#include<bits/stdc++.h>
using  namespace std;
int calculation(int x,int n){
	int cal =1;

	while (n  != 0){
	
	
	cal *= x;
	--n;}
	return cal;

}
int main(){
	int x;
	int n;
	
	cin >> x;
	cin >>n;
	int output = calculation(x , n);
	
	cout <<output <<endl;
	
}
