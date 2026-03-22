// Geometric progression - follow that same logic here -
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of terms : ";
    cin>>n;
    int a = 1;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a = a*2; // ye part hai imp.
    }

}