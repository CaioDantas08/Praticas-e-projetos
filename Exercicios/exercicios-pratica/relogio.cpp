#include <iostream>
using namespace std;




void horario(int horas, int minutos, int segundos){

if(segundos>=60){
    minutos += segundos/60;
    segundos = segundos % 60;

}
if(minutos>=60){
    horas += minutos/60;
    minutos = minutos % 60;

}
if(horas>=24){
    horas = horas%24;

}

if(horas<10){
    cout << "0" ;
}
cout << horas << ":";
if(minutos<10){
    cout << "0";
}
cout << minutos << ":" ;
if(segundos<10){
    cout << "0";
}
cout << segundos << endl;

}

void calcularhoras(int horas, int minutos, int segundos){

//Somando uma hora cravado
horario(horas+1, minutos, segundos);
//Somando uma hora cravado
horario(horas+2, minutos+10, segundos+30);
//Somando uma hora cravado
horario(horas+4, minutos+40, segundos+50);
//Somando uma hora cravado
horario(horas+12, minutos+5, segundos+5);


}


int main(){

    int horas, minutos, segundos;
    cin >> horas >> minutos >> segundos;

    calcularhoras(horas,minutos,segundos);

    return 0;
}