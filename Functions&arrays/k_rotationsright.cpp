#include<iostream>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};
    int n,r;
    cout<<"enter size: ";
    cin>>n;
    int j=n-1;
    cout<<"enter the no of times you want to rotate the array: ";
    cin>>r;
    int k=r%n;
    //first reversal
    for(int i=0;i<n/2;i++){
        swap(a[i],a[j]);
        j--;
    }
    //second reversal of k elements
    int left=0,right=k-1;
    while(left<right){
        swap(a[left],a[right]);
        left++;right--;
    }
    left=k;
    right=n-1;
    //third reversal for the remaining elements
    while(left<right){
        swap(a[left],a[right]);
        left++;right--;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}