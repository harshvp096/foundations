#include<iostream>
using namespace std;
int main(){
    int x = 9;
    int* p = &x; // only x doesn't work cause (int*) store address!
    cout<<x<<endl;
    * p = 23; // not p but *p (this store address)
    // being an address storer, make changes to the value at the address
    cout<<x<<endl;

}