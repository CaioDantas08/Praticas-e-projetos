#include <iostream>
#include <string>
using namespace std;

string validador(string s){
    string alfabeto_maiusculo = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string alfabeto_minusculo = "abcdefghijklmnopqrstuvwxyz";
    string numeros = "0123456789";
    bool valido1 = false;
    bool valido2 = false;
    bool valido3 = false;
    
    if(s.length() < 6 || s.length() > 32){
        return "Senha invalida.";
    }
    for (int i = 0; i < s.length(); i++){
        bool pertence = false;
        for (int j = 0; j < 26; j++){
            if(s[i] == alfabeto_maiusculo[j]){
                valido1 = true;
                pertence = true;
            }
            if(s[i] == alfabeto_minusculo[j]){
                valido2 = true;
                pertence = true;
            }
        }
        for (int j = 0; j < 10; j++){
            if(s[i] == numeros[j]){
                valido3 = true;
                pertence = true;
            }
        }
        if(!pertence){
            return "Senha invalida.";
        }
    }
    if(valido1 && valido2 && valido3){
        return "Senha valida.";
    }else{
        return "Senha invalida.";
    }
}

int main(){
    while(true){
        string s{};
        getline(cin,s);
        if(s.empty()){
            break;
        }
        cout << validador(s) << endl;
    }
    return 0;
}
