#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number : ";
    cin>>x;
    int sum = 0;
    while(x!=0){
        int ld = x%10;
        x /= 10; //n = n/10
        sum = sum + ld; 
    }
    cout<<sum;

}