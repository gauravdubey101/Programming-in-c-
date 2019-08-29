#include<bits/stdc++.h>
using namespace std;
int lastIndex(int input[], int size, int x) {
 if(size == 0){
     return 0;
 }
    
    return lastIndex(input+1,size-1,x);
    if( input[0] == x){
        return x;
    }
    else{
        return -1;
    }
    

}

int main(){
int input[] = {1,2,3,4,5};
int size = sizeof input[]/sizeof()	
}
