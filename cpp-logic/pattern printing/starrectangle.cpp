// TAKE THESE AS GENERAL - 
    // rows = m
    // column = n
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of stars in the rows : ";
    cin>>m; 
    int n;
    cout<<"Enter the number of columns : ";
    cin>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
//For square take m = n and for both!
