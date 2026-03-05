#include <iostream>
#include <iomanip>
using namespace std;

double media(double matriz[12][12]){
    double soma{};
    double denominador{};

    for (int i = 0; i < 12; i++){
    for (int j = 0; j < 12; j++){
         if((i<j) && ((i+j) < 11)){
            soma +=matriz[i][j];
            denominador++;
         }
    }   
    }
    double mediaFinal = soma / denominador;
    return mediaFinal;
}

double soma(double matriz[12][12]){
    double soma{};

    for (int i = 0; i < 12; i++){
    for (int j = 0; j < 12; j++){
         if((i<j) && ((i+j) < 11)){
            soma +=matriz[i][j];
         }
    }   
    }   
    return soma;

}

int main(){
    char operacao{};
    cin >> operacao;
    double matriz[12][12];
    for (int i = 0; i < 12; i++){
    for (int j = 0; j < 12; j++){
    cin >> matriz[i][j];
    }  
    }
    if(operacao == 'S'){
    cout << fixed << setprecision(1) << soma(matriz) << endl;
    }else if(operacao == 'M'){
    cout << fixed << setprecision(1) << media(matriz) << endl;
    }
    

    return 0;
}