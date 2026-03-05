#include <iostream>
using namespace std;

int teto(float x) {
    int resultado = 0;
    if(x > 0){
        while(resultado < x){  
            resultado++;
        }
    }else{
        while(resultado > x){  
            resultado--;
        }
        if(resultado < x){
            resultado++;
        }
    }
    return resultado;
};

int main() {
    float n;
    cin >> n;
    cout << "A função teto desse número é " << teto(n) << "." << endl;
    return 0;
}