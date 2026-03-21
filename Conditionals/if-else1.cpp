#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a : ";
    cin>>a;
    int b;
    cout<<"Enter b : ";
    cin>>b;
    if(a%2==0){
        cout<<"a is even";
    }
    else if(b%2==0){
        cout<<"b is even";
    }
    else{
        cout<<"none is even";
    }
}