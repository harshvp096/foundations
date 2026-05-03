#include<iostream>
using namespace std;
void print(int x, int n){
    if(x>n) return; // base condition
    cout<<x<<endl; // work
    print(x+1, n); // call
    //[REPLACE - CALL & WORK] --> [oppsite function]
    // cout<<x<<endl; keep this up for - decending - action first 
    // print(x+1,n); this calls for funct - making small to big call
                                                                                                                                                       
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    print(1,n);
}