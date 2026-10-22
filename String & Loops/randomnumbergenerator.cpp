#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    //pseudo-random=Not truly random(but close)
    srand(time(NULL));
    // int num=rand();
    //giving large numbers but we didnt want that
    //if want to get numbers for a dice- but this gives us number btw 0 and 6, so-
    // int num=(rand() % 6)+1;//random number btw 1 and 6

    //what if we have to roll 3 dices
    int num1=(rand() % 6)+1;
    int num2=(rand() % 6)+1;
    int num3=(rand() % 6)+1;
    cout<<num1<<'\n';
    cout<<num2<<'\n';
    cout<<num3<<'\n';
    return 0;
}