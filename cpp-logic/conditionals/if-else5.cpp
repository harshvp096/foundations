//area ya fir parameter, kya jyada bada?
#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"Enter the lenght : ";
    cin>>l;
    int b;
    cout<<"Enter the breath : ";
    cin>>b;
    int x;
    int y;
    x = l*b;
    y = 2*(l+b);
    cout<<"Area = "<<x<<endl;
    cout<<"Parameter = "<<y<<endl;

    if(x>y){
        cout<<"Area is greater";
    }
    else{
        cout<<"Parameter is greater";
    }
}