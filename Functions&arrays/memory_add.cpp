#include<iostream>
using namespace std;
int main(){
    //memoryaddress= a location in memmory where data is stored 
    //a memory address can accessed with & (address-of operator)
    string name="BRO";
    int age=21;
    bool student =true;
    cout<<&name<<'\n';
    cout<<&age<<'\n';
    cout<<&student<<'\n';
    return 0;
}