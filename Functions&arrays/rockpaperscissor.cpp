#include<iostream>
using namespace std;
char getuserchoice();
char getcomputerchoice();
void showchoice(char choice);
void choosewinner(char player, char computer);


int main(){
    char player;
    char computer;
    player = getuserchoice();
    cout<<"Your choice: ";
    showchoice(player);
    return 0;
}

char getuserchoice(){
    char player;
    cout<<"Rock paper scissor game!\n";
    do{
        cout<<"Choose one of the following\n";
        cout<<"'r' for rock\n";
        cout<<"'p' for paper\n";
        cout<<"'s' for scissors\n";
        cin>>player;
        
    }while(player!='r' && player!='p' && player!='s');
        return player;
}

char getcomputerchoice(){
    return 0;
}

void showchoice(char choice){

}

void choosewinner(char player, char computer){

}


