#include <iostream>
using namespace std;
int main(){
//     int x;
//     cout<<"Enter the n terms for the AP : ";
//     cin>>x;
//     for(int i=1;i<=(2*x-1);i=i+2){
//         cout<<i<<endl;
//     }


// }

// int n;
// cin>>n;
// for(int i=1;i<=(n*2);i=i+2){ 
//     cout<<i<<" ";
// }

int n;
cin>>n;
int a = 4; // first term
for(int i=1;i<=n;i++){ // to count till n
    cout<<a<<" "; // print each term
    a = a + 3; // new a = a + d
}

}