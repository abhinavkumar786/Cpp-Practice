#include<iostream>
using namespace std;
void printInfo(const string &name, const int &age);
int main(){
    string name="BRO";
    int age=21;
    printInfo(name,age);
    return 0;
}
void printInfo(const string &name, const int &age){
    name=" ";
    age=0;
    cout<<name<<'\n';
    cout<<age<<'\n';
}
// int &a → You can modify the original variable.
// const int &a → You can access the original variable but cannot modify it.
// const parameter = parameter that is effectively read-only
// code is more secure & conveys intent
// useful for references and pointers