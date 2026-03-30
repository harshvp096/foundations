#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the marks of your putr here : ";
    cin>>n;
    if(n>80 && n<100){
        cout<<"Grade = A";
    }
    else if(n>60 && n<79){
        cout<<"Grade = B";
    }
    else if(n>40 && n<59){
        cout<<"Grade = C";
    }
    else{
        cout<<"FAIL ho gaye ho aap beta (lmao)";
    }
}
//similar for that quadrant question, just add value of x
// and y using && operator and (n<0 and n>0 like this for each).