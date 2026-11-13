#include<iostream>
using namespace std;
int main(){
    string car[] = {"Corvette", "Mustang", "Camry", "BMW"};
    for(int i=0;i<sizeof(car)/sizeof(string);i++){
        cout<<car[i]<<"\n";
    }
    return 0;
}