#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count = 0;
    while(n!=0){ // doesn't work with for loops! 
        n = n/10;
        count++;
    }
    cout<<count;

}