#include <iostream>
using namespace std;

int main(){

    int linhas{};
    int colunas{};
    cin >> linhas >> colunas;

    bool preta = (linhas % 2 == 0) && (colunas % 2 == 1) || (linhas % 2 == 1) && (colunas % 2 == 0);  
    if(preta){
        cout << "0" << endl;
    }else{
        cout << "1" << endl;
    }

    return 0;
}