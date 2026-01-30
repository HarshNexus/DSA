#include<iostream>
#include <climits>
using namespace std;
int getmin(int arr[], int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>=min){
            min=arr[i];
        }
    }
    return min;
}
int getmax(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<=arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int mul(int arr[],int n){
    int sum=1;
    for(int i=0;i<n;i++){
        sum=sum*arr[i];
    }
    return sum;
}
void linear(int arr[],int n,int w){
    for(int i=0;i<n;i++){
        if(w==arr[i]){
            cout<<"found at"<<i+1<<endl;
            return;
        }
        
        
    }
    
    cout<<"not found"<<endl;
    
}
void reverse(int arr[],int n){
    int f=0;
    int l=n-1;
    while(f<=l){
        swap(arr[f],arr[l]);
        f++;
        l--;
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    }
int main(){
    int arr[5]={1,2,3,4,5};
    // int a=getmax(arr,5);
    // cout<<a<<endl;
    // int b=getmin(arr,5); 
    // cout<<b<<endl;
    // cout<<sum(arr,5)<<endl;
    // cout<<mul(arr,5)<<endl;

    // linear(arr,5,3);
    reverse(arr,5);
    print(arr,5);

}