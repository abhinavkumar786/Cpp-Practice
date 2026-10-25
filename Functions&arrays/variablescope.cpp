#include<iostream>
using namespace std;
int num=3;
//global variable
void printnum();

int main(){
    int num=1;
    printnum();
    //it is a local variable in main function.
    cout<<num<<endl;
    return 0;
}

void printnum(){
    int num=2;
    //can use same variable name until it is in different scope.
    //but first remove the parameter
    cout<<num<<endl;
}
// a function always take the local variable first, not the global