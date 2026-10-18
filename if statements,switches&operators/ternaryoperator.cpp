#include<iostream>
using namespace std;
int main(){
    // ternary operator ?:=replacement to an if/else statement
    //condition ? expression1 :expression2;
    int grade =75;
    // if(grade>=60)
    // {
    //     cout<<"you pass";
    // }
    // else{
    //     cout<<"you fail";
    // }
    // return 0;
    grade>=60? cout<<"you pass!" : cout<<"You fail";

    return 0;
}