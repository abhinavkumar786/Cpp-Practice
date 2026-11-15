#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a[5]={-1,-2,-3,-4,-5};
    int c=0,l=a[0],sl=INT_MIN,n=5;
    
    for(int i=0;i<n;i++){
        if(l==a[i]){
            c++;
            continue;
        }
        if(l<a[i]){
            sl=l;
            l=a[i];
        }
        else{
            if(sl<a[i]) sl=a[i];
            else continue;
        }
    }
    // if(c==n)
    if(sl==INT_MIN){
        cout<<-1;;
    }
    else cout<<sl;
    return 0;
}
// sl == INT_MIN
// This checks whether sl currently contains that smallest integer value.

// It returns either true or false.