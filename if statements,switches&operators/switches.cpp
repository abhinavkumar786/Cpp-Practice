#include<iostream>
using namespace std;
int main(){
    int month;
    cout<<"enter the month(1-5): ";
    cin>>month;
    switch(month){
        case 1:
            cout<<"It is January";
            break;
        case 2:
            cout<<"It is February";
            break;
        case 3:
            cout<<"It is March";
            break;
        case 4:
            cout<<"It is April";
            break;
        case 5:
            cout<<"It is May";
            break;
        default:
            cout<<"please enter in only numbers(1-5)";
}
}