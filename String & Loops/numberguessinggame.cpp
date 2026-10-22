#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    int num,guess,tries=0;
    srand(time(NULL));
    num=(rand()%10)+1;
    do{
        cout<<"Guess the number(1-10): ";
        cin>>guess;
        tries++;
        if(guess>num){
            cout<<"Too high\n";
        }
        else if(guess<num) cout<<"Too low\n";
        else cout<<"Correct!, number of tries: "<<tries<<'\n';
    }while(guess!=num);


    return 0;
}