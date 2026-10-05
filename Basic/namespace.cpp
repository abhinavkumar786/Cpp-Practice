#include<iostream>
using namespace std;

namespace A {
    int y = 5;
}

namespace B {
    int y = 3;
}


int main(){
// Namespace = provides a solution for preventing name conflicts
//             in large projects. Each entity needs a unique name.
//             A namespace allows for identically named entities
//             as long as the namespaces are different.

// int x=0;   error: redefinition of 'int x' with a different type: 'int' vs 'int'
// int x=1;

// int x = 5;
// x = 3;
// cout<<x<<endl; //3 allowed because x is defined in the same namespace

//The :: means "look inside this namespace."

//Just { } → creates a scope
//The inner x exists only inside that { }.

cout << A::y;   // 5
cout << B::y;   // 3


int x = 5;

{
    int x = 4;
    cout << x;   // 4
}

cout << x;       // 5

return 0;
//Both allow another x to exist, but namespaces are specifically designed to organize names and prevent name conflicts in larger programs.
//scope is allowed inside main but not the namespace

//cout is a instruction so it must be in main
}
