#include<iostream>
using namespace std;
void printnum(int num);

int main(){
    int num=1;
    printnum(num);
    //it is a local variable in main function.
    return 0;
}

void printnum(int num){
    int num=1;
    //can use same variable name until it is in different scope.
    cout<<num;
}