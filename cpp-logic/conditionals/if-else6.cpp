#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int c;
    cin>>c;
    if(a+b>c && a+c>b && b+c>a){
        cout<<"Triangle will exist";
    }
    else{
        cout<<"Triange will not exist";
    }
}