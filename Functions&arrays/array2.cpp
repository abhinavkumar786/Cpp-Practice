#include<iostream>
using namespace std;
int main(){
    string car[] = {"Corvette", "Mustang", "Camry", "BMW"};
    for(int i=0;i<sizeof(car)/sizeof(string);i++){
        cout<<car[i]<<"\n";
    }
// for each loop
    for(string cars : car){
        //for every cars in car array print the cars
        cout<< cars << "\n";
    }
    return 0;
}