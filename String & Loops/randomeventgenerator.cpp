#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int randnum=(rand()%3)+1;
    switch(randnum){
        case 1: cout<<"You win a bumper sticker!\n";
                break;
        case 2:cout<<"You win a t-shirt!\n";
                break;
        case 3:cout<<"You win a free lunch!\n";
      
    }
    return 0;
}