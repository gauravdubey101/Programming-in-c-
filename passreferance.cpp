#include<bits/stdc++.h>
using namespace std;
void increment(int& n){
	n++;
}

int main(){
	int i =10;
	int& j = i;
	cout <<i <<endl;
	increment(i);
	cout <<i<<endl;
	
}
