//check if composite or prime with break statement
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // for(int i=2;i<=n/2;i++){
    //     if(n%i==0){
    //         cout<<"It's composite"; 
    //     }
    //     else{
    //         cout<<"Prime";
    //     }
    //     break;
    // }
    bool flag = true; // true = prime
    for(int i=2;i<=n/2;i++){
        if(n%2==0){
            flag = false; // false means composite
            break; // to get out of loop jese hi first factor mile
        }
    }
    if(n==1) cout<<"Prime to nahi hai composite bhi nahi hai"<<endl; // ye endl faaltu me hai no use.
    else if(flag==true) cout<<"Prime number hai"; //boolean ke hisab se 
    else cout<<"Composite number hai"; // same as above
}