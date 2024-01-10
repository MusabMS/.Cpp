// Compound Interest (with FUNCTION)
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double p = 1000, r = 10, t = 2, CI;
    r = r/100;
    CI = (p * std::pow(1 + r, t) - p);
    cout << CI;

    return 0;
}


// Compound Interest (without FUNCTION)
#include <iostream>
using namespace std;

int main() {
    double p = 1000, r = 10, t = 2, CI = 1;
    r = r/100, r += 1;
    for(int i=1; i<=t; i++){
        CI *= r;}
    CI = ((p * CI) - p);
    cout << CI;

    return 0;
}

