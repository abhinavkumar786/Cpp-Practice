#include<iostream>
using namespace std;
string fullname(string firstname, string lastname){
    cout<<"enter your first name: ";
    cin>>firstname;
    cout<<"enter your last name: ";
    cin>>lastname;
    return firstname+" "+lastname;
}
int main(){
    string firstname,lastname;
    string Fullname=fullname(firstname,lastname);
    cout<<"Your full name is : "<<Fullname<<endl;
    return 0;
}