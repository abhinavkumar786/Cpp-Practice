#include<iostream>
using namespace std;
int main(){
    string foods[5];
    int size=sizeof(foods)/sizeof(foods[0]);
    string temp;
    //i dont want to put the q in the array thats why temp
    for(int i=0;i<size;i++){
        cout<<"Enter a food you like or 'q' to quit #"<< i+1 <<": ";
        getline(cin,foods[i]);
        if(foods[i]=="q"){
            break;
        }
    }
    cout<<"You like the following food:\n";
    for(string food: foods){
        cout<<food<<"\n";
    }
    return 0;
}