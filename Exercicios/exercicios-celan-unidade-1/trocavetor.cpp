#include <iostream>
using namespace std;
//Vetor de tamanho 20, no qual devemos trocar o 
//primeiro com o ultimo, segundo e penultimo, etc.
void trocar(int vetor[20]){
    int temporario{};
    for (int i = 0; i < 10; i++){
            temporario = vetor[i];
            vetor[i] = vetor[19-i];
            vetor[19-i] = temporario; 
    }  

    for (int j = 0; j < 20; j++){
        cout << "N[" << j << "] = " << vetor[j] << endl; 
    }

}
    

int main(){
    int vetor[20];
    for (int i = 0; i < 20; i++){
        cin >> vetor[i];
    }
    trocar(vetor);
    
    return 0;
}
