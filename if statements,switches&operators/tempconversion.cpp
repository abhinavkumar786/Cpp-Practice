#include<iostream>
using namespace std;
int main(){
    double temp;
    char unit;
    cout<<"******temperature conversion******\n";
    cout<<"What unit would you like to convert to(either F or C):";
    cin>>unit;
    if(unit=='F'){
        cout<<"Enter the temp in celsius:";
        cin>>temp;
        temp=(1.8 * temp)+32.0;
        cout<<"Temperature is: "<<temp<<"F\n";
    }
    else if(unit == 'C'){
        cout<<"Enter the temp in fahrenheit: ";
        cin>>temp;
        temp=(temp-32.0)/1.8;
        cout<<"The temperature is: "<<temp<<"C\n";
    }
    else cout<<"Please enter either C or F\n";
    cout<<"**********************************";
    return 0;
}