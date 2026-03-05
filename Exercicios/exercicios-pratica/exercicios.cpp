#include <iostream>
using namespace std;

struct Circulo{
int raio;

double area(){
    return raio*raio*3.14;
}/

};

int main(){

Circulo circulo;
circulo.raio = 5;

cout << circulo.area() << endl;


    return 0;
}