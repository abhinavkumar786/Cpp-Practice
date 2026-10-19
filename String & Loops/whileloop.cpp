#include<iostream>
using namespace std;
int main(){
    string name;
    // if(name.empty()){
    //     cout<<"Enter your name: ";
    //     getline(cin,name);
    // }
    // what if user didn't enter the name so we will use while loop to check until user enters
    // forcing user to enter the name
    while(name.empty()){
        cout<<"Enter your name: ";
        getline(cin,name);
    }
    cout<<"Hello "<< name;
    //infinite loop
    while(1==1){
        cout<<"Help!";
    }
    return 0;
}