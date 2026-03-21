#include<iostream>
using namespace std;
int main(){
    int sp;
    cout<<"Enter the sp : ";
    cin>>sp;
    int cp;
    cout<<"Enter the cp : ";
    cin>>cp;
    if(cp>sp){
        cout<<"Loss of "<<(cp-sp)<<endl;
    }
    if(sp>cp){
        cout<<"Profit of "<<(sp-cp)<<endl;
    }
    else{
        cout<<"Neither profit nor loss";
    }
}
