#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a positive number: ";
    cin>>num;
    while(num<0){
        cout<<"enter a positive number: ";
        cin>>num;
    }
    cout<<"the number is: "<<num;
    //here we are writing 2 lines again, so to do it correctly we will use do while
    
    // do{
    //     cout<<"enter a positive number: ";
    //     cin>>num;
    // }while(num<0);
    //it can be used in game, like playing it once and then its the user choice to play it again
    return 0;
}