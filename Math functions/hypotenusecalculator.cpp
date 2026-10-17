#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a,b,c;
    cout<<"enter the sides of right angled triangle: ";
    cin>>a>>b;
    c=sqrt(pow(a,2)+pow(b,2));
    cout<<"Hypotenuse of right angled triangle is: "<<c<<endl;
    return 0;
}