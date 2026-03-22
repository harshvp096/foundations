// highest factor 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number you wanna find the factor of : ";
    cin>>n;
    int f;
    for(int i=1;i<=(n/2);i++){
        if(n%i==0) f=i;
    }
    cout<<f;
    
}
// if using without like n/2 then use only < cause we are taking (n-1)
