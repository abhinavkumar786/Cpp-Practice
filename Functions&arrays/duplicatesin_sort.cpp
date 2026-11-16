#include<iostream>
using namespace std;
int main(){
    int n,i=0,j=0;
    cout<<"enter no of elements: "<<"\n";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        
        if(a[i]!=a[j]){
            j++;
            a[j]=a[i];

        }
    }
    for(int i=0;i<=j;i++){
        cout<<a[i]<<"\n";
    }
    return 0;
}
