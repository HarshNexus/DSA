#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
}
void selectionsort(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
int main(){
    int arr[6]={0,8,5,1,9,4};
    int n=6;
    selectionsort(arr,n);
    print(arr,n);
}