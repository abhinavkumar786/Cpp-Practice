#include<iostream>
#include<ctime>
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
    computer=getcomputerchoice();
    cout<<"Computer choice: ";
    showchoice(computer);
    choosewinner(player,computer);
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
    srand(time(0));
    int num=(rand()%3)+1;
    
    switch(num){          
        case 1:            
            return 'r'; 
            break;           
                             
        case 2:            
            return 'p';   
            break;           
        case 3:            
            return 's'; 
            break;           
    }                        

   
}

void showchoice(char choice){
    switch(choice){
        case 'r':
            cout<<"rock\n";
            break;
        
        case 'p':   
            cout<<"paper";
            break;

        case 's': 
            cout<<"scissors";
            break;    
    }
    
}

void choosewinner(char player, char computer){
    switch(player){
        case 'r':
    }
}


