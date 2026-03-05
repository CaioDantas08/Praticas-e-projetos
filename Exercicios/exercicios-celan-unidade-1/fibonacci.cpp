#include <iostream>
using namespace std;

long long fibonacci(unsigned long long valor){
    if(valor == 0) return 0;
    if(valor == 1) return 1;
    long long a{};
    long long b = 1;
    long long c{};
    for(int i = 2; i <= valor; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main(){
    int n{}; // casos de teste
    cin >> n;
    int contador{};
    long long valor{};
    while(contador < n){
        cin >> valor;
        cout << "Fib(" << valor << ") = " << fibonacci(valor) << '\n';
        contador++;
    }
    return 0;
}
