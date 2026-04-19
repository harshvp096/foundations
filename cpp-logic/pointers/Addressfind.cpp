// Location = 4 bytes = 32 bits in main memory
//&(variable) = address of that variable in memory
#include<iostream>
using namespace std;
int main(){
    int x = 3;
    cout<<&x<<endl;
}
// different on multiple runs!
// different on different variable
// different even if same int value & in same funct