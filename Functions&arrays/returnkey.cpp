#include<iostream>
using namespace std;
double square(double length);//function declaration
double cube(double length);
int main(){
    //return: return a value back to the spot
    //where you called the encompassing fucntion
    double length=5.0;
    double area=square(length);
    double volume=cube(length);
    //argument
    cout<<"Area: "<< area << "cm^2\n";
    cout<<"Volume: "<< volume << "cm^3\n";
    return 0;
}
// void square(double length)//parameter
double square(double length){
    //function definition
    double result= length * length;
    return result;
}

double cube(double length){
    double cube=length * length * length;
    return cube;
}