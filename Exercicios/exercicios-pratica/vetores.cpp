#include <iostream>
using namespace std;


    

struct Vetores{
    int dimensao;
    int array[100];
};

Vetores somavetores(Vetores vetor1, Vetores vetor2){
    Vetores vetorsoma;
    vetorsoma.dimensao = vetor1.dimensao;
    for (int i = 0; i < vetor1.dimensao; i++){
        vetorsoma.array[i] = vetor1.array[i] + vetor2.array[i];
    }
    return vetorsoma;
    
};

int produtointerno(Vetores vetor1, Vetores vetor2){
   int soma = 0;
   for (int i = 0; i < vetor1.dimensao; i++){
    soma += vetor1.array[i] * vetor2.array[i];
   }
   return soma;
}



int main(){

   int n;
   cin >> n;
   
    

    Vetores vetor1;
    Vetores vetor2;
    vetor1.dimensao = n;
    vetor2.dimensao = n;


    for (int i = 0; i < n; i++)
    {
      cin >> vetor1.array[i];
    }
    for (int i = 0; i < n; i++)
    {
      cin >> vetor2.array[i];
    }

    Vetores somaVetor = somavetores(vetor1, vetor2);
    int produtoInterno = produtointerno(vetor1, vetor2);

    for (int i = 0; i < n; i++)
    {
        cout << somaVetor.array[i] << " ";
    }

    cout << endl;
    cout << produtoInterno << endl;
    
    
    
    

    return 0;
}

