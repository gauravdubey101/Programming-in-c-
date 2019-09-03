#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;
	int main(){
//		pair<int,char> p;
//		p = make_pair(2,'b');
//		pair<int,char> p2(1,'a');
//		cout<<p.first<<" "<<p.second<<endl;
//		cout<<p2.first<<" "<<p2.second<<endl;

//set
	set<int> s;
	int arr[] = {1,2,3,4,6,5};
	for(int i =0;i<7;i++){
		s.insert(arr[i]);
	}
	set<int>::iterator it;
	for(it=s.begin();it !=s.end();it++){
		cout<<*it<<endl;
	}
	if(s.find(6) == s.end()){
		cout<<"element not found"<<endl;
	}else{
		cout<<"Element found"<<endl ;
	}
	
}
