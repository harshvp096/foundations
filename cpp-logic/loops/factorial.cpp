#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number : ";
    cin>>x;
    int prod = 1;
    for(int i=1;i<=x;i++){
        prod = prod*i;
        cout<<prod<<endl; //har digit till n ka factorial
    }
    //single cout<<prod; to fir final aayega
}