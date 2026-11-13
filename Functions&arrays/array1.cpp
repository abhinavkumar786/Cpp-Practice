#include<iostream>
using namespace std;
int main(){
    // string car[] = {"Corvette", "Mustang", "Camry"};
    // cout<<car[0]<<'\n';
    // cout<<car[1]<<'\n';
    // cout<<car[2]<<'\n';
    string car[3];
    car[0] = "Corvette";
    car[1] = "Mustang";
    car[2] = "Camry";
//must declare size of string array when using assignment operator   
    cout<<car[0]<<'\n';
    cout<<car[1]<<'\n';
    cout<<car[2]<<'\n';
//sizeof(): determines the size of the array in bytes of variable, data type, class, objects.
    cout<<"Size of car array: "<<sizeof(car)<<'\n';
    cout<<"Size of car[0]: "<<sizeof(car[0])<<'\n';
    cout<<"Size of car[1]: "<<sizeof(car[1])<<'\n';
    cout<<"Size of car[2]: "<<sizeof(car[2])<<'\n';
    //string is of 32 bytes, so the size of car array is 3*32 = 96 bytes

    double gpa=8.41;
    int num=10;
    char grade='A';
    bool student=true;
    char grades[]={'A','B','C','D','F'};
    cout<<sizeof(gpa)<<" bytes\n";
    cout<<sizeof(grade)<<" bytes\n";
    cout<<sizeof(student)<<" bytes\n";
    cout<<sizeof(grades)<<" bytes\n";
    cout<<sizeof(num)<<" bytes\n";
    cout<<sizeof(char)<<" bytes\n";

    cout<<sizeof(grades)/sizeof(char)<<" elements in grades array\n";

    return 0;
}
