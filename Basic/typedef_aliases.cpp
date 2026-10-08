// typedef is a reserved keyword used to create an additional name (alias)for another data type.
//new identifier for an existing type, helps with readabililty and reduces typos, use when there is a clear benefit
//replaced with 'using'
#include<iostream>
#include<vector>
using namespace std;
// typedef vector<pair<string,int>>pairlist_t;
typedef string text_t;
using number_t =int;
//can be applied to different data types, including user-defined types, pointers, and arrays. It can also be used to create aliases for complex data types, such as function pointers or template classes.
int main(){
    // vector<pair<string,int>>pairlist; instead of whole 
    // pairlist_t pairlist;
    text_t name="john";
    number_t age=30;
    cout<<name<<endl<<age;

}