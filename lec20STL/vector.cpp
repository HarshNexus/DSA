#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    cout<< v.capacity();
}