#include<iostream>
using namespace std;
double square(double length);//function declaration

int main(){
    //return: return a value back to the spot
    //where you called the encompassing fucntion
    double length=5.0;
    double area=square(length);
    //argument
    cout<<"Area: "<< area << "cm^2\n";
    return 0;
}
// void square(double length)//parameter
double square(double length){
    //function definition
    double result= length * length;
    return result;
}