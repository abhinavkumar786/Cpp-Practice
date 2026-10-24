#include<iostream>
using namespace std;
void happyBirthday(string name, int age);
//another way of declaring a function
// void happyBirthday(){
//     cout<<"Happy Birthday to you\n";
//     cout<<"Happy Birthday to you\n";
//     cout<<"Happy Birthday to you\n";
// }


int main(){
    //function=a block of reusable code
    string name="bro";
    int age=21;
    happyBirthday(name,age);
    //house
}
void happyBirthday(string name, int age){
    cout<<"Happy Birthday to you "<<name<<'\n';
    cout<<"Happy Birthday to you "<<name<<'\n';
    cout<<"Happy Birthday to you "<<name<<'\n';
    cout<<"You are "<<age<<" years old";
    //neighbour
}