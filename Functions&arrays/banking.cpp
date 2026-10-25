#include<iostream>
#include<iomanip>//for getting value upto two decimal places
using namespace std;
void showbalance(double balance);
double deposit();
double withdraw(double balance);
int main(){
    double balance=10000;
    int choice;
    do{
    cout<<"Enter your choice\n";
    cout<<"1. Show balance\n";
    cout<<"2. Deposit money\n";
    cout<<"3. Withdraw money\n";
    cout<<"4. Exit\n";
    cin>>choice;
    switch(choice){
        case 1:
            showbalance(balance);break;
        case 2:
            balance+=deposit();break;
        case 3:
            balance-=withdraw(balance);break;
        case 4:
            cout<<"Thanks for visiting!\n";break;
        default:
            cout<<"Invalid choice";
    }
}while(choice!=4);
    return 0;
}
void showbalance(double balance){
    cout << "Your balance is: ₹" << setprecision(2) << fixed << balance << "\n";
}

double deposit(){
    return 0;
}

double withdraw(double balance){
    return 0;
}