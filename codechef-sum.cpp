/*#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int a;
	int b;
	int sum;
	cin >>n;
	while(n--){
		cin >>a>>b;
		sum = a+b;
		cout <<sum<<endl;
	}
}
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	int n;
	int fact =1;
	cin >>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			fact = fact*i;
		}
		cout <<fact<<endl;
	}		
}
