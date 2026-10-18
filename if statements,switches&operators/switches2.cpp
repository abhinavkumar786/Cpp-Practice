#include<iostream>
using namespace std;
int main(){
    char grade;
    cout<<"What letter grade?: ";
    cin>>grade;
    switch(grade){
    case 'A':
     cout<<"You did great!";
     break;
    case 'B':
     cout<<"You did good!";
     break;
    case 'C':
    cout<<"You did not do good!";
    break;
    default:
     cout<<"Please only enter in a letter grade(A-C)";
    }
}
