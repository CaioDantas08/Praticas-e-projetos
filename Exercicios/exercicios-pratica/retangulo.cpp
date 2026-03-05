#include <iostream>
using namespace std;

//A partir de um R - sendo R as coordenadas x e y do 
//canto inferior esquerdo de um retângulo no 
//plano cartesiano - pedir a largura e altura do 
//retangulo ao usuário e pedir um ponto P - sendo
// P um ponto com coordenadas X e Y qualquer. 
//Retornar verdadeiro ou falso se o ponto estiver dentro
// do retângulo.

bool retangulo(int rx, int ry,int rw, int rh, int px, int py){
    bool eh_dentro = false;
    bool height = py >= ry && py <= (ry+rh);
    bool width = px >= rx && px <= (rx+rw);
    if(width && height){
     eh_dentro = true;
    }
    return eh_dentro;
}

int main(){
    int rx = 0, ry = 0, rw = 0, rh = 0, px = 0, py = 0;
    cin >> rx >> ry >> rw >> rh >> px >> py;
    bool resultado = retangulo(rx, ry, rw, rh, px, py);
    if(resultado){
        cout << "Verdadeiro!" << endl;
    }else{
        cout << "Falso!" << endl;
    }
    return 0;
}