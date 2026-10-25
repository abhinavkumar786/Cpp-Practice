#include<iostream>
using namespace std;
// void bakepizza();
// void bakepizza(string topping1);
void bakepizza(string topping1, string topping2);

int main(){
    // bakepizza();
    // bakepizza("pepperoni");
    bakepizza("pepperoni","mushroom");
    return 0;
}

void bakepizza(){
    cout<<"Here is your pizza\n";
}
//functions can have same name but different parameters.
void bakepizza(string topping1){
    cout<<"Here is your "<<topping1<<" pizza!\n";
}
void bakepizza(string topping1, string topping2){
    cout<<"Here is your "<<topping1<<" and "<<topping2<<" pizza!";
}