#include<iostream>
using namespace std;
int main(){
    int x = 3;
    int* p = &x; // doesn't have to be always p.
    // this p now stores physical address of x.
    // int* = new datatype = location of int variable
    cout<<&x<<endl;  // address
    cout<<p<<endl;  // address
    cout<<x<<endl; // value  
    cout<<*p<<endl; // value as *p = derefrence operator of p
    // *p => [p ke address -> p ka dabba -> usme x ka address -> x ki value]
// POINTERS are used to access the value of variable whose address is store in them. 
// For this, Derefrence operators/* is used!




// [&]-> gives address
// [*]-> value of that address stored in the variable

}