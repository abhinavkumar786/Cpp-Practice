#include<iostream>
using namespace std;
int main(){
    // string foods[10]={"pizza", "pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza"};
    // for(string food: foods){
    //     cout<<food<<"\n";
    // }
    const int size=100;
    string foods[size];
    // fill(foods, foods + 100, "pizza");//100 times printed, but in ....
    fill(foods, foods + (size/2), "pizza");
    //some printed then blanks

    fill(foods + (size/2), foods + size, "Hamburger");
    //starting address, ending address, what to type
    for(string food: foods){
        cout<<food<<"\n";
    }
    return 0;
}