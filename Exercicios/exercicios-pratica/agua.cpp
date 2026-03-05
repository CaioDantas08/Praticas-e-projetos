#include <iostream>
using namespace std;


int main(){

int n;
cin >> n;
int valor = 0;
if(n <=10){
valor = 7;
}
if(n>10 && n<=30){
valor = 7 + (n-10);
}
if(n>30 && n<=100){
valor = 7 + 20 + 2*(n-30);
}
if(n>100){
valor = 7 + 20 + 2*70 + 5*(n-100);
}

cout << valor << endl;
    return 0;
}