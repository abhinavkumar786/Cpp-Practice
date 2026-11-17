#include<iostream>
using namespace std;
int main(){
    int n,maxsum=INT_MIN;
    cout<<"enter array size: ";
    cin>>n;
    int a[n];
    cout<<"enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=a[j];
            maxsum=max(maxsum,sum);
        }
    }
    cout<<"Largest sum is : "<<maxsum;
    return 0;
}
//i--> starting index, j-->ending index, j=i use this otherwise it will add previous elements