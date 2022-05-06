#include<iostream>
using namespace std;
bool power(int n){
    if (n<=0){
        return false;
    }
    int ans=(n&(n-1));//n-1 means nothing but 1 s complement
    if (ans==0){
        return true;
    }
    else{
        return false;
    }

}
int main (){
    int n;
    cout<<"write the number you want "<<endl;
    cin>>n;
    if(power(n)){
        cout<<"yes this is power of two"<<endl;
    }
    else {
        cout<<"no this is not power of two"<<endl;
    }
    
}