#include<iostream>
using namespace std;
//cin---> extraction operator
//cout--> insertion operator
int main(){
    string name;
    int age;
    cout<<"What's your age:";
    cin>>age;
    cout<<"What's your name?: ";
    cin>>name;
    cout<<"Hello "<<name;
    cout<<" You are "<<age << " years old";
    return 0;
}
