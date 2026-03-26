//100 to 1
#include<iostream>
using namespace std;
int main(){
    // for(int i=100;i>=1;i--){ 
    //     cout<<i<<" ";
    // }

    cout<<"Another method for the highest factor problem";
    int n;
    cin>>n;
    for(int i=n/2;i>=1;i--){
        if(n%2==0){
            cout<<i<<" ";
            break; //stops at first answer and since the code is for 
            //reverse, this works nicely! 
        }
    }

}