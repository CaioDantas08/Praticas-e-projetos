#include <iostream>
using namespace std;

enum tipodedado{
    idh,
    populacao
};

struct paises{
    string acronimo;
    double populacao;
    double idh;
};

const int max_paises = 230;

double calcularmedia(paises paises[], int totalpaises, tipodedado tipo){
    double soma = 0.0;
    for (int i = 0; i < totalpaises; i++)
    {
        if(tipo == idh){
          soma +=  paises[i].idh;

        }else{
            soma+=paises[i].populacao;
        }
    }

   if(soma > 0.0){
    return soma / totalpaises;
   }
    return 0;
}

void imprimirpaises(paises paises[], int totalpaises, double mediaidh, double mediapopulacao){
    for (int i = 0; i < totalpaises; i++){
        if(paises[i].populacao > mediapopulacao && paises[i].idh < mediaidh){
            cout << paises[i].acronimo << endl;
        }
    }
    
}

int main(){

    double mediaidh = 0.0;
    double mediapopulacao = 0.0;

    paises paises[max_paises];
    int totalpaises = 0;
    string entrada;


    for (int i = 0; i < max_paises; i++)
    {
        cin >> entrada;
        if(entrada ==   "---"){
            break;
        }
        paises[i].acronimo = entrada;
        cin >> paises[i].populacao >> paises[i].idh;
        totalpaises = i;

    }

     mediaidh = calcularmedia(paises, totalpaises, idh);
    mediapopulacao = calcularmedia(paises, totalpaises, populacao);

   imprimirpaises(paises, totalpaises, mediaidh, mediapopulacao);
    

    return 0;
}