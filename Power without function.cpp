#include <iostream>
using namespace std;

int main() {
    int a, b, c=1;
    cout<<"Enter value for the main number:";
    cin>>a;
    cout<<"Enter the power:";
    cin>>b;
    for(int i=1; i<=b; i++){
        c *= a;}
    cout<<c;

    return 0;
}
