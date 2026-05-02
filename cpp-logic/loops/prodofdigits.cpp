#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number : ";
    cin>>x;
    int prod = 1;
    while(x!=0){
        int ld = x%10;
        x /= 10; //n = n/10
        prod*=ld; 
    }
    cout<<prod;

}