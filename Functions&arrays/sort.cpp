//check if sorted or not
#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5},n=5;
    int c=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
           c++;
        }
        else{
            break;
        }
    }
    if(c==n-1){
        cout<<"array is sorted";
    }
    else{
        cout<<"not sorted";
    }
    
    return 0;
}