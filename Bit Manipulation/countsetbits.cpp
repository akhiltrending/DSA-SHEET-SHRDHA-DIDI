#include<iostream>
using namespace std;
int countsetbits(int n){
    int count=0;
    while(n>0){
        if((n&1)>0){
            count ++;
        }
        n=n>>1;
    }
    return count;
} 


int main(){
    int n;
    cout<< "enter the number "<< endl;
    cin>>n;
    cout<<"the number of set bits are : "<<countsetbits(n)<<endl;
    
} 