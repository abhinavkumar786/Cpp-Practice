#include<iostream>
using namespace std;
// Namespace = provides a solution for preventing name conflicts
//             in large projects. Each entity needs a unique name.
//             A namespace allows for identically named entities
//             as long as the namespaces are different.

// int x=0;   error: redefinition of 'int x' with a different type: 'int' vs 'int'
// int x=1;

int x = 5;
// x = 3;
// cout<<x<<endl; //3 allowed because x is defined in the same namespace
namespace A {
    int x = 5;
}

namespace B {
    int x = 3;
}
cout << A::x;   // 5
cout << B::x;   // 3
//The :: means "look inside this namespace."




