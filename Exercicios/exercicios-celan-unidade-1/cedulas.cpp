#include <iostream>
using namespace std;


void cedulas(int n){
    int cedulas[7] = {100,50,20,10,5,2,1};
    cout << n << endl;
    for (int i = 0; i < 7; i++){
       int temp = n / cedulas[i];
       n = n % cedulas[i];
       cout << temp << " nota(s) de R$ " << cedulas[i] << ",00" << endl;
    } 
}

int main(){
    int n{};
    cin >> n;
    cedulas(n);


    return 0;
}