//can do this from formula or loops -
//formula method -
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number : ";
    cin>>x;
    int sum = 0;
    // cout<<x*(x+1)/2;   -- FORMULA and THAT'S it!
    for(int i=0;i<=x;i++){
        sum = sum + i;
    }
    cout<<sum;

}