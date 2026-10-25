#include<iostream>
using namespace std;
// void bakepizza();
void bakepizza(string topping1);

int main(){
    // bakepizza();
    bakepizza("pepperoni");
    return 0;
}

void bakepizza(){
    cout<<"Here is your pizza\n";
}
//functions can have same name but different parameters.
void bakepizza(string topping1){
    cout<<"Here is your "<<topping1<<" pizza!\n";
}