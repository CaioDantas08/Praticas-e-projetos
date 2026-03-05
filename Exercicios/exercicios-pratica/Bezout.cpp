#include <iostream>
#include <cstdlib>
using namespace std;


int mdc(int a, int b, int &s, int &t) {
    a = abs(a);
    b = abs(b);

  
    int s0 = 1, t0 = 0; 
    int s1 = 0, t1 = 1; 

    cout << "Passos para calcular MDC(" << a << ", " << b << "):" << endl;

    while (b != 0) {
        int q = a / b;  
        int resto = a % b;

        cout << a << " = " << q << " * " << b << " + " << resto << endl;

       
        a = b;
        b = resto;

       
        int s_ant = s0, t_ant = t0;
        s0 = s1;
        t0 = t1;
        s1 = s_ant - q * s1;
        t1 = t_ant - q * t1;
    }

 
    s = s0;
    t = t0;

    cout << "O MDC é " << a << "." << endl;
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;

    int s, t;
    int gcd = mdc(a, b, s, t);

    cout << "Coeficientes de Bézout: s = " << s << ", t = " << t << endl;
    cout << gcd << " = " << s << "*" << a << " + " << t << "*" << b << endl;

    return 0;
}