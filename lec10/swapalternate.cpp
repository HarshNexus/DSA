#include<iostream>
using namespace std;
void swap_alternate(int arr[], int n){
    int s=0;
    int e=1;
        while(e<n){
        swap(arr[s],arr[e]);
        s+=2;
        e+=2;
        }
    
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }
int main(){
    int arr[5]={1,2,3,4,5};
    print(arr,5);
    swap_alternate(arr,5);
    print(arr,5);
    
}