// FACTORIAL using recursion function
#include <iostream>
using namespace std;

int fact(int num){
    if(num==1){
        return 1;
    }
    return num*fact(num-1);
}
int main(){
    int m;
    cout<<"Enter a number for FACTORIAL:";
    cin>>m;
    cout<<"Factorial of "<<m<<" is "<<fact(m);
    return 0;
}
