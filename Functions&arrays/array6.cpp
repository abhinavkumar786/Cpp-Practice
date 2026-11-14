#include<iostream>
using namespace std;
int main(){
    // string foods[10]={"pizza", "pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza"};
    // for(string food: foods){
    //     cout<<food<<"\n";
    // }
    const int size=99;
    string foods[size];
    // fill(foods, foods + 100, "pizza");//100 times printed, but in ....
    fill(foods, foods + (size/3), "pizza");
    //some printed then blanks

    fill(foods + (size/3), foods + (size/3)*2, "Hamburger");
    //starting address, ending address, what to type

    fill(foods + (size/3)*2, foods + size, "Rasmalai");

    for(string food: foods){
        cout<<food<<"\n";
    }
    return 0;
}