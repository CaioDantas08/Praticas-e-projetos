#include <iostream>
using namespace std;

int pontuacao(int score1, int score2, int score3) {
    // Variáveis booleanas para verificar repetições
    bool rep12 = (score1 == score2);
    bool rep13 = (score1 == score3);
    bool rep23 = (score2 == score3);
    
    // Se houver qualquer repetição, retorna o valor repetido
    if(rep12 || rep13) return score1;
    if(rep23) return score2;
    
    // Variáveis booleanas para encontrar o valor do meio
    bool score1_medio = (score1 > score2 && score1 < score3) || (score1 > score3 && score1 < score2);
    bool score2_medio = (score2 > score1 && score2 < score3) || (score2 > score3 && score2 < score1);
    bool score3_medio = (score3 > score1 && score3 < score2) || (score3 > score2 && score3 < score1);
    
    // Retorna o valor do meio
    if(score1_medio) return score1;
    if(score2_medio) return score2;
    return score3;
}

int main() {
    int scoresA[9], scoresB[9];

    // Lendo os scores
    for(int i = 0; i < 9; i++) {
        cin >> scoresA[i];
    }
    for(int i = 0; i < 9; i++) {
        cin >> scoresB[i];
    }

    // Calculando scores diários e final para A
    int dia1A = pontuacao(scoresA[0], scoresA[1], scoresA[2]);
    int dia2A = pontuacao(scoresA[3], scoresA[4], scoresA[5]);
    int dia3A = pontuacao(scoresA[6], scoresA[7], scoresA[8]);
    int totalA = pontuacao(dia1A, dia2A, dia3A);

    // Calculando scores diários e final para B
    int dia1B = pontuacao(scoresB[0], scoresB[1], scoresB[2]);
    int dia2B = pontuacao(scoresB[3], scoresB[4], scoresB[5]);
    int dia3B = pontuacao(scoresB[6], scoresB[7], scoresB[8]);
    int totalB = pontuacao(dia1B, dia2B, dia3B);

    // Determinando o vencedor
    if(totalA > totalB) {
        cout << "A" << endl;
    } else if(totalB > totalA) {
        cout << "B" << endl;
    } else {
        cout << "empate" << endl;
    }

    return 0;
}