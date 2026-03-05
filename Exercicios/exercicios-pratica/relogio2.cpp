#include <stdio.h>
#include <iostream>
using namespace std;

void relogio(int n){
    
int horas = 0, minutos = 0, segundos = 0;

segundos = n;
if(segundos>=60){
    minutos += segundos / 60;
    segundos = segundos%60;
    
}
else if(minutos >=60){
    horas += minutos / 60;
    minutos = minutos % 60; 
}
if(horas >=24){
    horas = horas % 24;
}

cout << horas << ":" << minutos << ":" << segundos << endl;
    
}

 
int main() {
 
 int n;
 cin >> n;
 
 relogio(n);
 

 
 
    return 0;
}