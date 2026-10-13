#include<iostream>
using namespace std;
//cin---> extraction operator
//cout--> insertion operator
int main(){
    string name;
    int age;
    cout<<"What's your age:";
    cin>>age;


    cin.ignore();  // Remove the leftover newline
    cout<<"What's your full name?: ";
    //after spacing name is not considered
    //cin>>name;
    getline(cin,name);
    // getline(cin>>ws,name);


//problem:The newline character \n from pressing Enter remains in the input buffer.
//if code doesn't have any cin before getline then there will be no error


    cout<<"Hello "<<name;
    cout<<" You are "<<age << " years old";
    return 0;
}
