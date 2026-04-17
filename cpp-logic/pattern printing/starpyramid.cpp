#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of rows and stars: ";
    cin>>m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m-i;j++){ 
            cout<<"  ";
        } 
        for(int j=1;j<(2*i);j++){// aise hi logic dekho!
            cout<<"* ";
        }
        cout<<endl;
    }



}
// did on my own too! this was in medium+ category! 