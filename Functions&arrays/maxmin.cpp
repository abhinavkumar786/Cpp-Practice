#include<iostream>
using namespace std;
int main(){
    int arr[5]={5,8,9,23,4};
    int mx=arr[0],mn=arr[0],n=5;
    for(int i=1;i<n;i++){
        // mx=max(mx,arr[i]);
        // mn=min(mn,arr[i]);
        if(mx<=arr[i]) mx=arr[i];
        if(mn>=arr[i]) mn=arr[i];
    }
    cout<<mx<<" "<<mn;

    return 0;
}