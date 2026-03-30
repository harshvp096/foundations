// a/b/c me se greatest!
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of a : ";
    cin>>a;
    int b;
    cout<<"Enter the value of b : ";
    cin>>b;
    int c;
    cout<<"Enter the value of c : ";
    cin>>c;
    if(a>b){
        if(a>c){
        cout<<"a is the greatest";
} 
    if(c>a){
        cout<<"c is the greatest";
}
}
    if(b>a){
        if(b>c){
            cout<<"b is the greatest";
        }
        else{
            cout<<"c is the greatest";
        }
    }


}