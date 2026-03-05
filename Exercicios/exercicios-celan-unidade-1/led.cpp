#include <iostream>
using namespace std;

void leds(string numero){
    string numeros = "0123456789";
    int leds[10] = {6,2,5,5,4,5,6,3,7,6};
    int contador{};
    int soma{};
    while(numero[contador] != '\0'){
        for (int i = 0; i < 10; i++){
        if(numero[contador] == numeros[i]){
            soma+=leds[i];
        }
        }
        contador++;  
    }
    cout << soma << " leds" << endl;
}

int main(){
    //numero de testes
    int n{};
    cin >> n;
    cin.ignore();
    //numero verificado a cada teste
    //laco para chamar a funcao n vezes
    int contador{};
    while(contador < n){
        string numero{};
        getline(cin,numero);    
        leds(numero);
        contador++;
    }
    return 0;
}