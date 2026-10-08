// typedef is a reserved keyword used to create an additional name (alias)for another data type.
#include<iostream>
#include<vector>
using namespace std;
// typedef vector<pair<string,int>>pairlist_t;
typedef string text_t;
int main(){
    // vector<pair<string,int>>pairlist; instead of whole 
    // pairlist_t pairlist;
    text_t name="john";
    cout<<name;

}