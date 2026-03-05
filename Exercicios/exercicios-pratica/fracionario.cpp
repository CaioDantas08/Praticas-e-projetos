#include <iostream>
using namespace std;


struct fracao{
    int numerador;
    int denominador;
};

void adicao(fracao fracao1, fracao fracao2){
int numeradorsoma = 0;
int denominadorsoma = 0;
numeradorsoma = fracao1.numerador * fracao2.denominador + fracao1.denominador * fracao2.numerador;
denominadorsoma = fracao1.denominador * fracao2.denominador;
if(fracao1.denominador == fracao2.denominador){
 cout << fracao1.numerador + fracao2.numerador << "/" << fracao1.denominador << endl;
}else{
 cout << numeradorsoma << "/" << denominadorsoma << endl;
}
};
void multiplicacao(fracao fracao1, fracao fracao2){
  cout << fracao1.numerador * fracao2.numerador << "/"  << fracao1.denominador * fracao2.denominador << endl;

};
void subtracao(fracao fracao1, fracao fracao2){
int numeradorsoma = 0;
int denominadorsoma = 0;
numeradorsoma = fracao1.numerador * fracao2.denominador - fracao1.denominador * fracao2.numerador;
denominadorsoma = fracao1.denominador * fracao2.denominador;
if(fracao1.denominador == fracao2.denominador){
 cout << fracao1.numerador - fracao2.numerador << "/" << fracao1.denominador << endl;
}else{
 cout << numeradorsoma << "/" << denominadorsoma << endl;
}
};
void divisao(fracao fracao1, fracao fracao2){
 cout << fracao1.numerador * fracao2.denominador << "/" << fracao1.denominador * fracao2.numerador << endl;
};



int main(){

    fracao fracao1;
    fracao fracao2;
    string operacao;
    char barra;
    for (int i = 0; i < 1; i++){
        cin >> fracao1.numerador >> barra >> fracao1.denominador;
    }
    for (int i = 0; i < 1; i++){
        cin >> fracao2.numerador >> barra >> fracao2.denominador;
    }
  cin >> operacao;
    if(operacao == "a"){
     adicao(fracao1, fracao2);
    }
    if(operacao == "m"){
     multiplicacao(fracao1, fracao2);
    }
    if(operacao == "d"){
     divisao(fracao1, fracao2);
    }
   


    return 0;
}