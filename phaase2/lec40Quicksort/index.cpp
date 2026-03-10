#include<iostream>
using namespace std;
int  partition(int *arr,int s, int e,int n){
    int pivot=arr[s];
    int cnt=0;
    for(int i=s;i<=e;i++){
        if(arr[i]<pivot){
            cnt++;
        }
    }
    int pi=s+cnt;
    swap(arr[pi],arr[s]);

    int i=s;
    int j=e;
    while(i<pi&&j>pi){
        while(arr[i]<=pivot) i++;
        while(arr[j]>pivot) j--;
 
        
        if(i<pi&&j>pi) swap(arr[i++],arr[j--]);
    }
 return pi;
}
void quicksort(int *arr, int s, int e, int n){
    if(s>=e) return ;
    int p=partition(arr,s,e,n);
    quicksort(arr,s,p-1,n);
    quicksort(arr,p+1,e,n);
}
int main(){
    int arr[5]={5,4,3,2,1};
    quicksort(arr,0,4,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    
}