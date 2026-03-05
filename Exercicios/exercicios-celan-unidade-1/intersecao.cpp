#include <iostream>
#include <iomanip>
using namespace std;

class Retangulo{
    private:
    double rx{};
    double ry{};
    double rw{};
    double rh{};
//Notacoes: rx e ry são as coordenadas do ponto inferior esquerdo do retangulo.
//rw e rh correspondem a largura e altura do retangulo.
    public:
    Retangulo(double rx, double ry, double rw, double rh){
        this->rx=rx;
        this->ry=ry;
        this->rw=rw;
        this->rh=rh;
    }
    double getRx(){
        return rx;
    }
    double getRy(){
        return ry;
    }
    double getRw(){
        return rw;
    }
    double getRh(){
        return rh;
    }
    void imprimir(){
        cout << fixed << setprecision(4) << "Coordenada X do ponto inferior esquerdo: "<< rx << ".\nCoordenada Y do canto inferior esquerdo: " << ry 
        << ".\nLargura: " << rw << ".\nAltura: " << rh << "." << endl;
    }

};

Retangulo intersecao(Retangulo r1, Retangulo r2){
    double x = max(r1.getRx(), r2.getRx());
    double y = max(r1.getRy(), r2.getRy());

    double x2 = min(r1.getRx()+r1.getRw(),r2.getRx()+r2.getRw());
    double y2 = min(r1.getRy()+r1.getRh(), r2.getRy()+r2.getRh());

    if(x<x2 && y<y2){
        double width = x2 - x;
        double height = y2 - y;
        Retangulo r3(x,y,width,height);
        return r3;
    }else{
        Retangulo r3(0,0,0,0);
        return r3;
    } 
};

int main(){
    //Primeiro retangulo
    double rx1{};
    double ry1{};
    double rw1{};
    double rh1{};
    cin >> rx1 >> ry1 >> rw1 >> rh1;
    Retangulo retangulo1(rx1,ry1,rw1,rh1);
    //Segundo retangulo
    double rx2{};
    double ry2{};
    double rw2{};
    double rh2{};   
    cin >> rx2 >> ry2 >> rw2 >> rh2;
    Retangulo retangulo2(rx2,ry2,rw2,rh2); 
    //Criando retangulo da intersecao
    Retangulo retangulo3 = intersecao(retangulo1,retangulo2);
    bool eh_nulo = retangulo3.getRw() == 0 || retangulo3.getRh() == 0;
    if(eh_nulo){
        cout << "Sem intersecao";
    }else{
        retangulo3.imprimir();
    }
        cout << endl;
    
    return 0;
}
