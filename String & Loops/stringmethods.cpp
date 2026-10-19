#include<iostream>
using namespace std;
int main(){
    //name.length()
    //name.empty()
    //name.clear()
    //name.append()
    //name.at(), (index)
    //name.insert(), (index, what to insert)
    //name.find(), returns index
    //name.erase(), (beginning index, no of characters)
    string name;
    cout<<"Enter your name: ";
    getline(cin,name);
    // if(name.length()>12){
    //     cout<<"your name can't be over 12 characters";
    // }

    // if(name.empty()){
    //     cout<<"You didn't enter your name\n";
    // }
    // else cout<<"Welcome "<<name<<endl;


    name.clear();
    cout<<"Welcome "<<name<<endl;


    // name.append("@gmail.com");
    // cout<<"Your username is now "<<name<<endl;
    // cout<<name.at(0)<<endl;
    // // name.insert(0,"@");
    // cout<<name<<endl;
    // cout<<name.find(" ")<<endl;

    //name.find(" ") returns string::npos when the substring is not found.
    // - string::npos is the maximum value of the unsigned type size_t.
    // - On your 64-bit system, that value is 18446744073709551615.
//     cout<<name.erase(0,4);

    return 0;
}