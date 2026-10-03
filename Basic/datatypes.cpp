#include<iostream>
using namespace std;
int main(){
    //Integer--> whole numbers
    int age =21;
    int year=2026;
    int days=7.5;
    cout<<days<<endl;

    //double--. number including decimal points
    double price=10.99;
    double gpa=2.5;
    double temp=25.1;
    cout<<price<<endl;

    // ' '--> character, " "-->string
    //It's a valid multi-character literal, not a two-character char.
    // char initial="BC" error: invalid conversion from 'const char*' to 'char' [-fpermissive]

    //single character
    char grade='A';
    char initial='B';
    cout<<grade<<endl;
    
    return 0;
}