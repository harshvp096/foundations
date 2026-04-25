#include<iostream>
using namespace std;
// int*a and *b are variables with their own address storing address or others
int swap(int* a, int* b){ // using *a as deref operator
    int temp = *a; // gives the value on the address!
    // a me jao -> a ke address -> us address ki value pe action that did!
    *a = *b;
    *b = temp;
}
int main(){
    int x;
    cout<<"Enter the value of x : ";
    cin>>x;
int y;
    cout<<"Enter the value of y : ";
    cin>>y;
cout<<x<<" "<<y<<endl;
    swap(&x,&y); // sending address from here
    //both address are sent to both deref op!
cout<<x<<" "<<y;
}
// this (&a,&b) --[toward]--> (int*a,int*b)
                //   ||
                //  \  /
                //   \/
// this is called - pass by refrence!!!!
// jo ki logically pass by address hai!