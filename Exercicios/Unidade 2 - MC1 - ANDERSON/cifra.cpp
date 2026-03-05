#include <iostream>
#include <string>
using namespace std;

string cifra_cesar(string texto, int chave){

string cifra = "";
char alfabeto[26] = {'a','b','c','d','e','f','g','h','i',
                     'j','k','l','m','n','o','p','q','r',
                     's','t','u','v','w','x','y','z'};

char alfabeto_maiusculo[26] = {'A','B','C','D','E','F','G','H','I',
                             'J','K','L','M','N','O','P','Q','R',
                             'S','T','U','V','W','X','Y','Z'};  


   chave = chave % 26;
   if (chave < 0) {
        chave += 26;
   }


  for (int i = 0; i < texto.length(); i++){
     bool caractere = false;

    for (int j = 0; j < 26; j++){
      if(texto[i] == alfabeto[j]){
        int indice_cifra = (j+chave)%26;
        cifra += alfabeto[indice_cifra];
        caractere = true;
        break;
        
      }
    }//Teste para o alfabeto minusculo.

    if(caractere == false){
      for (int j = 0; j < 26; j++){
      if(texto[i] == alfabeto_maiusculo[j]){
        int indice_cifra = (j+chave)%26;
        cifra += alfabeto_maiusculo[indice_cifra];
        caractere = true;
        break;
        
      }
    }
    }//Teste para o alfabeto maiusculo.

  if(caractere == false){
    cifra +=texto[i];
  }//Teste para caracteres não pertencentes ao alfabeto.



  }
  return cifra; 
};


int main() {
    int chave;
    string texto;
    
    cout << "Digite a chave: ";
    cin >> chave;
    cin.ignore();
    
    cout << "Digite o texto: ";
    getline(cin, texto);  
    
    cout << "Texto cifrado: " << cifra_cesar(texto, chave) << '\n';
    return 0;
}