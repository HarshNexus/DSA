#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value"<<endl;
    cin>>n;
    if(n<=1){
        cout<<"cant be a prime"<<endl;
    }        
    bool isprime=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isprime=false;
        }
    }
    if(isprime){
        cout<<"prime number"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
    }

