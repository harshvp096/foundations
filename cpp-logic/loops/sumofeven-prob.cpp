#include<iostream>
// sum of even numbers only from a given number
using namespace std;
int main(){
    int x;
    cout<<"Enter the number : ";
    cin>>x;
    int sum = 0;
    while(x!=0){
            int ld = x%10;
        if(ld%2==0){
            x = x/10;
            sum = sum + ld;
    } 
        else{
            sum = sum;
        }
    }
    cout<<sum;


}