#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of rows and stars in it : ";
    cin>>m; 
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){ 
            if(i%2==0){ //cause i remains constantly increasing throughout the runs!
                cout<<(char)(j+64);
            } 
            else{
                cout<<j;
            }
        }
        cout<<endl; 
    }
}