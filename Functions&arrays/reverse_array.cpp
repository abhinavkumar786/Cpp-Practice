#include<iostream>
using namespace std;
int main(){
    int a[5]={4,56,2,51,8};
    int n=5,left=0,right=n-1;
    for(int i=0; i<n/2; i++){
        swap(a[left],a[right]);
        left++;right--;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}