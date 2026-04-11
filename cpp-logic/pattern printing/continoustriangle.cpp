#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows you want : ";
    cin>>n;
    int a=0; // ye sir ka a = 1 tha
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){ // sir ne bas a ko bhar declare kiya tha dono loop ke and 
            if(n!=0){ // ye nahi likha tha
            a = a + 1; // ye bhi nahi = a++; likha tha but this is my own so good!                
            }
            cout<<a<<" "; // 3rd method - directly print a++ (post increment operator)
        }
        cout<<endl;
    }


}