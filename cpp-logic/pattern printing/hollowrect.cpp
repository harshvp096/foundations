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
            if((i==1) || (i==m) || (j==1) || (j==n)){
                cout<<"* ";
            }
            else{
                cout<<"  "; // yaha pe keep it same space as if!
            }
        }
        cout<<endl;

    }

}