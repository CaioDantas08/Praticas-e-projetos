#include <iostream>
using namespace std;


double potencia(double base, double expoente){
if(expoente == 0){
    return 1;
}
return base * potencia(base, expoente-1);

}



int main(){

int base, expoente;
cin >> base >> expoente;
cout << potencia(base,expoente) << endl;
    return 0;
}
