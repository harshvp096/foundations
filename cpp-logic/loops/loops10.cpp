//continue statements
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value you want to skip : ";
    cin>>n;
    for(int i=1;i<=20;i++){
        if(i==n) continue;
        cout<<i<<" ";
    }


}