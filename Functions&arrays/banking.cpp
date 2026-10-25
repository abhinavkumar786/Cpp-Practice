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
    //if we type pizza or other things, it will break our program, its not a integer
   if (!(cin >> choice)) {
    cin.clear();
    cin.ignore(10000, '\n');
    continue;
    }

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
            cout<<"Invalid choice!\n";
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

// 
// 1. if (!(cin >> choice))
// This line takes input and checks whether it was entered correctly.
// 
// Suppose the user enters pizza instead of 1, 2, 3, or 4.
// - cin >> choice tries to convert pizza into an integer.
// - The conversion fails because pizza isn't a valid integer.
// - ! means NOT, so the condition becomes true when input fails.
// - The code inside the if block executes.
// If the user enters 2, the input succeeds, so the if block is skipped.
// 
// 
// 2. cin.clear();
// When input fails, C++ sets an error flag called failbit.
// 
// cin.clear() resets that error flag so cin can accept input again.
// 
// But it doesn't remove pizza from the input buffer. That's why we need the next line.
// 
// 
// 3. cin.ignore(10000, '\n');
// This removes the invalid input from the buffer.
// - 10000 is the maximum number of characters to ignore.
// - '\n' means stop when the newline character (Enter) is reached.
// For example, if the user enters pizza, it discards pizza and the Enter key's newline.
// 
// Now the next input can work correctly.
// 
// 
// 4. continue;
// continue immediately skips the remaining statements in the current loop iteration and starts the next iteration of the do-while loop.
// 
// In your program, that means the menu appears again instead of running the switch with invalid input.





