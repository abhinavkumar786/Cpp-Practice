#include<iostream>
using namespace std;
int getDigit(const int number);
int sumOddDigits(const string cardNumber);
int sumEvenDigits(const string cardNumber);
int main(){
    int result=0;
    string cardNumber;

    cout<<"Enter your credit card number: ";
    cin>>cardNumber;

    result = sumOddDigits(cardNumber) + sumEvenDigits(cardNumber);
    if(result%10==0) cout<<"Card number is valid"<<'\n';

    else cout<<"Card number is not valid"<<'\n';
    return 0;
}
int getDigit(int number){
    //const int number
    //18         8        18/10=1   1%10=1       
    return number % 10 + (number /10 %10);

    // int sum=0;
    // while(number>0){
    //     sum+=number%10;
    //     number=number/10;
    // }
    //return sum;
    
}

int sumOddDigits(const string cardNumber){
    int sum=0;

    for(int i = cardNumber.size()-1; i>=0; i-=2){
        sum+=getDigit(cardNumber[i] - '0');
    }
    return sum;
}

int sumEvenDigits(const string cardNumber){

    int sum=0;
    for(int i = cardNumber.size()-2; i>=0; i-=2){
        sum+=getDigit((cardNumber[i] - '0')*2);
    }
    return sum;
}
//Luhn algorithm
//to test credit card account number:
//take the account number divide it into 4 parts each
//then take only even position numbers and odd ones delete
//then multiply the remaining by 2 and if it produce 2 digit number split it 
//then calculate total sum
//then add only odd position numbers from the original account number
//no need to double them
//then add both sum
//if this sum is divisible by 10 then it is valid