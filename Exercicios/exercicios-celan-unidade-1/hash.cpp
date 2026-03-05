#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int hashs(string texto, int elemento_entrada){
    int valor{};
    string alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < texto.length(); i++){
    texto[i] = toupper(texto[i]);
    for (int j = 0; j < 26; j++){
      if(texto[i] == alfabeto[j]){
        valor += (j+i+elemento_entrada);
        break;
      }
    }   
  }
    return valor;
}

int main(){

    int testes{};
    cin >> testes;
    
    int contador{};
    while(contador<testes){
    int linhas;
    cin >> linhas;
    cin.ignore();
    int analise{};
    for (int i = 0; i < linhas; i++){
    string texto{};
    cin >> texto;
    analise+=hashs(texto,i);
    }
    cout << analise << endl;
    contador++;
    }

    return 0;
}