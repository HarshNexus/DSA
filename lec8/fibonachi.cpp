#include<iostream>
using namespace std;
int fib(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n-1)+fib(n-2);
}
void print(int n){
    for(int i=0;i<n+1;i++){
        cout<<fib(i)<<" ";

    }
}
int main(){
    int n;
    cout<<"enter";
    cin>>n;
    print(fib(n));
}