#include <iostream>
#include <string>
using namespace std;

void ASCII(string texto){
    int vetor[texto.length];
    int frequencia[texto.length];
    for (int i = 0; i < texto.length; i++){
    for (int j = 0; j < texto.length; j++){
    if(texto[i] == texto[j]){
    for (int k = j; k >= 0; k--){
        if(texto[i] == texto[k]){
        frequencia[k]++;
        }
    }
    
    
    frequencia[i] ++;
    } 
    }
    }
    
}
  
int main(){
    string texto{};
    while(true){
    getline(cin,texto);
    bool condicao_parada = texto.empty();
    if(condicao_parada){
       break; 
    }
    ASCII(texto);
    } 

    return 0;
}