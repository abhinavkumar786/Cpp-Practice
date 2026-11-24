#include<iostream>
using namespace std;
void swap(string x, string y);
int main(){
    string x="Kool-aid";
    string y="Water";
    string temp;
    // temp=x;
    // x=y;
    // y=temp;
    swap(x,y);
    cout<<"X: "<<x<<endl;
    cout<<"Y: "<<y<<endl;
    return 0;
}
void swap(string x, string y){
    //C++ creates copies of the original variables and passes those copies to the function.
    string temp=x;
    x=y;
    y=temp;
    cout<<"X: "<<x<<'\n';
    cout<<"Y: "<<y<<'\n';
}
//memory address of both x and both y will be different.