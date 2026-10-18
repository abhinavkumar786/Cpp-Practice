#include<iostream>
using namespace std;
int main(){
    char op;
    double n1,n2;
    double result;
    cout<<"******Calculator*******\n";
    cout<<"enter either(+,-,*,/):";
    cin>>op;
    cout<<"enter the two numbers:";
    cin>>n1>>n2;
    switch(op){
        case '+':
            result=n1+n2;
            cout<<"Addition is:"<<result;
            break;
        
         case '-':
            result=n1-n2;
            cout<<"Subtraction is:"<<result;
            break;

         case '*':
            result=n1*n2;
            cout<<"multiplication is:"<<result;
            break;

         case '/':
            result=n1/n2;
            cout<<"division is:"<<result;
            break;
        default:
            cout<<"Please enter valid operaitons";
    }

}