#include<iostream>
using namespace std;
double getTotal(double prices[]);
int main(){
    double prices[]={23.55, 45.9, 76.98, 65.98};
    double total=getTotal(prices);
    cout<< "₹" << total;
    //ctrl + alt + 4
    return 0;
}
double getTotal(double prices[]){
    double total=0;

    // for(double i:prices){  The problem is that when you pass an array to a function, it decays into a pointer.
    //     total+=i;
    // }
    //A pointer knows the memory address of the first element, but it doesn't know how many elements the original array contains.
    //neither we can use sizeof to calculate the no of elements in the for loop
    for(int i=0;i<)
    
    return total;
}