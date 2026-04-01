// Same as while but first run then check so run atleast once!
#include<iostream>
using namespace std;
int main(){
    int i = 1;
    do{
        cout<<i<<" ";
        i++;
    } while(i<=10);
}
// Here we will get 1000000 as an output despite being out of the order;
// #include<iostream>
// using namespace std;
// int main(){
//     int i = 10000000;
//     do{
//         cout<<i<<" ";
//         i++;
//     } while(i<=10);
// }


//COLLEGE EXAMS KE LIYE NOT FOR CODING LEARNING AND ALL!!!!!!!!!!!!!!!