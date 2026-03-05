#include <iostream>
using namespace std;

int main(){

    int n{};
    cin >> n;
    int opcoes[5] = {1,2,3,4,5};
    string nomes [5] {"Alface", "tomate", "carne","pao","queijo"};
    int quantidade[5] = {0,0,0,0,0};
    int preco[5] = {1,2,5,4,1};
    int total{};
    for (int i = 0; i < n; i++){
    int opcao{};
    cin >> opcao;
    for (int j = 0; j < 5; j++){        
    if(opcao == opcoes[j]){
    total+=preco[j];
    quantidade[j]++;
    break;
    }
    }
}
for (int i = 0; i < 5; i++){
    if(quantidade[i] > 0){
    cout << "Quantidade de " << nomes[i] << ": " << quantidade[i] << endl;
    }
}
    cout << "Moedas necessarias: " << total << endl;
    return 0;
}