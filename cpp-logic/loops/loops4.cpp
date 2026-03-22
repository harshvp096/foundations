//print table of n where n is input
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the value of x : ";
    cin>>x;
    for(int i=1;i<=(x*10);i++){
        if(i%x==0){
            cout<<i<<endl;
        }
    }

}
