#include<iostream>
using namespace std;
int main(){
    int temp;
    cout<<"enter the temperature:";
    cin>>temp;
    // if(temp>0 && temp<30)
    //     cout<<"The temperature is good";
    // else cout<<"The temperature is bad";

    if(temp<=0 || temp>=30)
        cout<<"The temperature is bad";
    else cout<<"The temperature is good";
    return 0;
}