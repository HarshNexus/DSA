#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout<<"entere value"<<endl;
    cin>>n;
    int ans=1;
    int bit;
    int i=0;
    while(n!=0){
        bit=n&1;
        n= n>>1;
        ans=(pow(10,i)*bit)+ans;
        i++;

    }
    cout<<ans;

}