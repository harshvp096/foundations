#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of stars in the rows : ";
    cin>>m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
            cout<<(char)(j+64)<<" "; // replace with i to get AAA
           //                                         BBB like this 
        } // replace 64 with 96 in j to get - a b c d
        // 96+i = aaa, bbb, ccc like this 
        cout<<endl;
    }

}