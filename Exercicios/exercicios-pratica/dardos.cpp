#include <iostream>
#include <cmath>
using namespace std;

double distancia_euclidiana(double x, double y, double p, double q){
    return sqrt((x-p)*(x-p)+(y-q)*(y-q));
}

int obter_pontuacao(double distancia){
    if(distancia <= 1){
        return 10;
    }
    if(distancia <= 2){
        return 6;
    }
    if(distancia <= 3){
        return 4;
    }

    return 0;
}

int main(){
    int n = 10;
    double pontuacao_geral = 0;
    double lx, ly;
    for(int i =0; i < n; i++){
        int pontuacao_bonus = 0, pontuacao_rodada = 0;
        double x, y;
        cin >> x >> y;
        pontuacao_rodada = obter_pontuacao(distancia_euclidiana(x, y, 0, 0));

        if(i != 0){
            pontuacao_bonus = obter_pontuacao(distancia_euclidiana(x, y, lx, ly)) / 2;
        }
        
        lx = x;
        ly = y;

        pontuacao_geral += pontuacao_rodada + pontuacao_bonus;
        cout << pontuacao_geral << endl;
    }

    cout << pontuacao_geral << endl;

    return 0;
}	