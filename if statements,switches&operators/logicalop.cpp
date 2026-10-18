#include<iostream>
using namespace std;
int main(){
    int temp;
    bool sunny = true;
    cout<<"enter the temperature:";
    cin>>temp;
    // if(temp>0 && temp<30)
    //     cout<<"The temperature is good";
    // else cout<<"The temperature is bad";

    if(temp<=0 || temp>=30)
        cout<<"The temperature is bad"<<endl;
    else cout<<"The temperature is good"<<endl;

    if(sunny) cout<<"It's sunny outside";
    else cout<<"It's cloudy outside";
    return 0;
}