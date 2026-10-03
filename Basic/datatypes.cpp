#include<iostream>
#include <iomanip>
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
    char dollarsign='$';
    cout<<grade<<endl;
    cout<<dollarsign<<endl;

    //boolen(true or false)
    bool student=false;
    bool power=true;
    bool forsale=true;
    cout<<student<<endl;
    cout<<power<<endl;

    //string(objects that represents a sequence of text)
    string name="Bro";
    string day="Monday";
    string food="Protein rich";
    string address="123 main st.";
    cout<<"Hello "<<name<<'\n';
    cout<<"you are "<<age<<" years old"<<'\n';


    /*float	double
Typical size	4 bytes	8 bytes
Precision	~6–7 decimal digits	~15–16 decimal digits
*/
    //float
    float a = 3.141592653589793;
    double b = 3.141592653589793;

    cout << a << endl;
    cout << b << endl;
    // Why? Because cout by default prints only about 6 significant digits.
    cout << setprecision(15) << a << endl;
    //float has about 6–7 significant digits of precision
    cout << setprecision(15) << b << endl;


//const keyword
//specifies that a variable's value is constant and tells the compiler to prevernt anything from modifying it. Read only variable
    const double pi=3.14159;
    // pi=4.321; // This would cause a compilation error
    double radius=10;
    double circumference=2* pi * radius;
    const int LIGHT_SPEED=299792458; //in meters per second
    //height and width etc
return 0;
}