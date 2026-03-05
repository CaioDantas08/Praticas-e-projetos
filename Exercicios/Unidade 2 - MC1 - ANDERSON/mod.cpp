#include <iostream>
#include <cmath>
using namespace std;

int mod(int dividendo, int divisor) {
    if (divisor == 0) {
        return 0;
    }

    int absDividendo = abs(dividendo);
    int absDivisor = abs(divisor);

    while (absDividendo >= absDivisor) {
        absDividendo -= absDivisor;
    }

 
    if (dividendo < 0 && absDividendo != 0) {
        absDividendo = absDivisor - absDividendo;
    }

    return absDividendo;
}

int main() {
    int dividendo, divisor;
    cin >> dividendo >> divisor;

    cout << mod(dividendo, divisor) << endl;
    return 0;
}