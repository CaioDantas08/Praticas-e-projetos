#include <iostream>
#include <cmath>
using namespace std;

int quociente(int dividendo, int divisor) {
  
    if (divisor == 0) {
        return 0; 
    }

   
    int absDividendo = abs(dividendo);
    int absDivisor = abs(divisor);

 
    int quociente = 0;

 
    while (absDividendo >= absDivisor) {
        absDividendo -= absDivisor;
        quociente++;
    }

//booleano para o if com operador Xor
bool sinal_quociente = (dividendo < 0) ^ (divisor < 0);


if(sinal_quociente){
     quociente = -quociente;
}

   
    if (dividendo < 0 && absDividendo != 0) {
        if (divisor > 0) {
            quociente--; 
        } else {
            quociente++; 
        }
    }

    return quociente;
}


int main(){
int divisor, dividendo;
cin >> divisor >> dividendo;
cout << quociente(divisor, dividendo) << endl;

    return 0;
}
