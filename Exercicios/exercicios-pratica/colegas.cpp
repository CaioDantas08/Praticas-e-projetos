#include <iostream>
using namespace std;

int divisores(int numero){
    int somadivisores = 0;
    for (int i = 1; i < numero; i++){
       if(numero % i == 0){
        somadivisores += i;

       }
    }
    return somadivisores;
}
bool colegas(int numeroum, int numerodois){

int dA = (divisores(numeroum)-numerodois);
int dB = (divisores(numerodois)-numeroum);

    if(dA< 0){
    dA = dA*-1;
    }
       if(dB< 0){
    dB = dB*-1;
    }

bool teste = dA <= 2 && dB <= 2;

if (teste){
   return true;
}else{
    return false;
}


};

    


int main(){

    int n, j;
    cin >> n >> j;

 if(colegas(n,j)){
    cout << "S" << endl;
 }else{
    cout << "N" << endl;
 }

    return 0;
}