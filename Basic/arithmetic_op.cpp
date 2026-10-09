#include<iostream>
using namespace std;
int main(){
    int students=1;
    students+=1;
    students++;
    // students**;no such thing, only for add/subt
    //same for subtraction, multiplication, division, and modulus

    //type conversion--> implicit and explicit
    // int x=3.14;
    double x=(int)3.14;
    cout<<x<<endl;
    char y=100;
    cout<<y<<(char)100<<endl;
    int correct=8;
    int questions=10;
    double score=correct/questions*100;

}
