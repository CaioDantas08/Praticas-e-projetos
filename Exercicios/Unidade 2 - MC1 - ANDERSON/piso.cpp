#include <iostream>
using namespace std;

int piso(float x) {
    int resultado = 0;
    if(x >= 0){
   
        while((resultado+1) <= x){ 
            resultado++;
        };      
    }else{ 
        while(resultado > x){
            resultado--;
          }  
    }
    return resultado;
};

int main() {
    float n;
    cin >> n;
    cout << "A função piso desse número é " << piso(n) << "." << endl;
    return 0;
}