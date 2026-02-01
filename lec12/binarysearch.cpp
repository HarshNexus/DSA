#include<iostream>
using namespace std;
int binary(int arr[],int n,int f){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]==f){
            return mid;
        }
        else if(arr[mid]>f){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[4]={1,2,3,4};
    int ans=binary(arr,4,3);
    cout<<"found at "<<ans <<endl;
}