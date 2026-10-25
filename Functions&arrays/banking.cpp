#include<iostream>
#include<iomanip>//for getting value upto two decimal places
using namespace std;
void showbalance(double balance);
double deposit();
double withdraw(double balance);
int main(){
    // double balance=10000.98;
    double balance=0;
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
            showbalance(balance);
            break;
        case 2:
            balance+=deposit();
            showbalance(balance);
            break;
        case 3:
            balance-=withdraw(balance);
            showbalance(balance);
            break;
        case 4:
            cout<<"Thanks for visiting!\n";
            break;
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
    double amount = 0;
    cout << "Enter amount to be deposited:";
    cin>>amount;
    cout << "Sucessfully deposited!\n";
    if(amount>0)
        return amount;
    else{
        cout<<"That's not a valid amount\n";
        return 0;
    }
}

double withdraw(double balance){
    double amount=0;
    cout << "Enter the amount to be withdrawn: ";
    cin>>amount;
    if(amount<balance)
        return amount;
    else{
        cout<<"insufficient funds\n";
        return 0;
    }
}