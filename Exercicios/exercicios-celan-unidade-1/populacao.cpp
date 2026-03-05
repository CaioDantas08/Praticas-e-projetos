#include <iostream>
using namespace std;

void crescimento(int PA, int PB, double G1, double G2){
    int contador{};
    while(PA<=PB){
    PA += (PA * G1) / 100;
    PB += (PB * G2) / 100;
        contador++;
        if(contador > 100){
            break;
        }
    }
        if(contador > 100){
            cout << "Mais de 1 seculo." << endl;
        }else{
            cout << contador << " anos." << endl;
        }   
}

int main(){
int quantidade_testes{};
cin >> quantidade_testes;

int PA{};
int PB{};
double G1{};
double G2{};

int contador{};
while(contador < quantidade_testes){
cin >> PA >> PB >> G1 >> G2;
crescimento(PA,PB,G1,G2);
contador++;
}

    return 0;
}