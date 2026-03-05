#include <iostream>
#include <string>
#include <cctype>
using namespace std;

char tautograma(char texto[51]){
char inicial{};
for (int i = 0; i<1; i++){
    inicial = toupper(texto[i]);
} 
int contador{};
bool eh_tautograma = true;
while(texto[contador] != '\0'){
    if((contador != 0) && toupper(texto[contador]) != inicial  && (texto[contador-1]) == ' '){
      eh_tautograma = false;
      break;
    }
    contador++;
}
if(eh_tautograma){
    return 'Y';
}
    return 'N';

}


int main(){
char texto[51];
while(cin.getline(texto,51)){
if(texto[0] == '*' && texto[1] == '\0'){
    break;
}
cout << tautograma(texto) << endl;
}
    return 0;
}