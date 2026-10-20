#include<iostream>
using namespace std;
int main(){
    int rows;
    int cols;
    char s;
    cout<<"how many rows: ";
    cin>>rows;
    cout<<"how many cols: ";
    cin>>cols;
    cout<<"enter a symbol to use: ";
    cin>>s;

    // for(int i=1;i<=3;i++){
    //     for(int j=1;j<=10;j++){
    //         cout<<j<<' ';
    //     }
    //     cout<<'\n';
    // }



    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            cout<<s;
        }
        cout<<'\n';
    }
    return 0;
}