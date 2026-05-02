#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int x = n; // to find the sum at the last line!
    int sum = 0;
    // while(x!=0){
    //     int ld = x%10;
    //     cout<<ld<<" ";
    //     x = x/10;
    // }

    while(x!=0){
        int ld = x%10;
        sum = sum*10;
        sum = sum+ld;
        x = x/10;
    }
    cout<<n+sum;
    // cout<<sum<<" ";
    // to add orignal number with this reversed number
    
}