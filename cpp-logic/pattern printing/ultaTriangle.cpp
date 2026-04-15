#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of stars and rows : ";
    cin>>m; 
    for(int i=m;i>=1;i--){
        for(int j=i;j>=1;j--){
            // Don't take 0 or ek extra like of star will appear!
            cout<<"* ";
        }
        cout<<endl;
    }
}
// i + j(max) = n + 1
// j(max) = n+1-i
// can use the formula - [j<=n+1-i] 