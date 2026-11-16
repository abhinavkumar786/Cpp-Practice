#include<iostream>
using namespace std;
int main(){
    // int a[6]={1,0,2,3,4,0};
    // int a[6]={0,0,0,1,2,3};no
    // int a[6]={1,2,3,4,5,0}; 
    // int a[6]={0,1,0,0,2,3};no
    int a[6]={0,0,0,0,0,0};
    int n=6,temp;
    for(int i =0;i<n-1;i++){
        temp=a[i+1];
        if(a[i]==0){
            if(temp==0 && n-i-2!=0)
                swap(a[i],a[i+2]);
            
            else 
                swap(a[i],a[i+1]);
        }

        else
            continue;
        }
    for(int i=0;i<n;i++){
        cout<<a[i];
    }

    return 0;
}
//not reliable if multiple zeroes came together, can handle two zeroes together not more than that