#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the side of square (kitne num) : ";
    cin>>m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
            cout<<j<<" "; // replace with i to get 111
           //                                      222 like this 
        }
        cout<<endl;
    }

}