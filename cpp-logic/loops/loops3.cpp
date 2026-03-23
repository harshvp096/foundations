//print all the even numbers
#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<=100;i=i+2){
        cout<<i<<" ";
    }   
    // ya fir aise bhi kar sakte ho

    for(int i=0;i<=100;i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
    
}