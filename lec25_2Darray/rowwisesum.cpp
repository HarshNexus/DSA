#include<iostream>
using namespace std;
void rowsum(int arr[3][3]){
     int n=3;
    for(int j=0;j<n;j++){
        int sum=0;
        for(int i=0;i<n;i++){
        sum=sum+arr[j][i];
    }
        cout<<sum<<" ";

    }
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
     rowsum(arr);
}