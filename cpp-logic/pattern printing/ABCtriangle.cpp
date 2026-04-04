#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of rows and stars in it : ";
    cin>>m; 
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){ // make sure j is always smaller/equal to i
            cout<<(char)(j+64)<<" "; // if i+64 then = a bb ccc type
        }
        cout<<endl; // yaad rakhna ki it's under loop
    }
}