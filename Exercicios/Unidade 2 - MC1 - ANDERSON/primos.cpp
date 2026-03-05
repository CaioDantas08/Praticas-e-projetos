#include <iostream>
using namespace std;

void primos(int inicio_intervalo, int fim_intervalo){

int inicio = inicio_intervalo;
int fim = fim_intervalo;

int primos[((fim-inicio)+1)]; 

int capturar_posicao_primo = 0; 
for(int i = inicio; i <= fim; i++){
    int divisores = 0;
for(int j = 1; j <= i; j++){
if(i % j == 0){
   divisores++;
   }
  }
 if(divisores == 2){
 primos[capturar_posicao_primo++] = i; 
}   


for(int k = 0; k < capturar_posicao_primo; k++ ){
    cout << primos[k] << " "; 
}
cout << endl;
}
  

int main(){
    int inicio, fim;
    cin >> inicio >> fim;
    primos(inicio, fim);
    return 0;
}