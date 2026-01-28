#include<iostream>
using namespace std;
bool prime(int n){
    if(n<=1){
        return false;
    }else{
        for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
            
        }
    }
    return true;
    }
    
}
int main(){
    int n;
    cout<<"enter no.";
    cin>>n;
    if(prime(n)){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not a prime"<<endl;
    }
}