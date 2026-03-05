#include <iostream>
using namespace std;

bool verificarprimo(int numero){
 
    int divisor = 0, divisorgemeo = 0;
    int gemeo = numero+2;
    for (int i = 1; i <= numero; i++){
        if(numero % i == 0){
            divisor++;
        }
    }

    for (int i = 1; i <= gemeo; i++){
          if(gemeo % i == 0){
            divisorgemeo++;
        }

    }
    
        if(divisor == 2 && divisorgemeo == 2){
           return true;
        }else{
            return false;
        }

}

int main(){

 int n;
 cin >> n;

 if (verificarprimo(n))
 {
    cout << "É um primo gêmeo." << endl;
 }else{
    cout << "Não é um primo gêmeo." << endl;
 }
 

    return 0;
}
