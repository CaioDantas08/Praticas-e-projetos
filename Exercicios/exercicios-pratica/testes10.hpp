#include <iostream>
#include <vector>




int main(){

    int array[10] = {1,2,3,4,77,77,77,88,88,88};
    std::vector<int> numeros_unicos;
    

    for (int i = 0; i < 10; i++){
        bool eh_unico{true};
      for (int j = 0; j < 10; j++){    
        if(array[i] == array[j]) eh_unico = false;
      }
      if(eh_unico) numeros_unicos.push_back(array[i]);
    }

    std::vector<int> array_repetidos;
    std::vector<int> numero_repeticoes;
    
    for (int i = 0; i < 10; i++){
       for (int j = 0; j < 10; j++){
        bool ja_inserido{false};
        if(array_repetidos.size() >= 1){
            for (int k = 0; k < array_repetidos.size(); k++){
                if(array_repetidos[k] == array[j]){
                    ja_inserido = true;
                }
            }
        }else{
            if(array[i] == array[j]){
                array_repetidos.push_back(array[i]);
                numero_repeticoes[i]++;
            }
        }
        if(ja_inserido){
            continue;
        }else{
            if(array[i] == array[j]){
                array_repetidos.push_back(array[i]);
                numero_repeticoes[i]++;
             }
         }
       } 
     }
     std::cout << "Números únicos: \n";
     for (int i = 0; i < numeros_unicos.size(); i++){
         std::cout<< numeros_unicos[i] << "\n";
     }
     std::cout << "Lista de números repetidos: \n";
     for (int i = 0; i < array_repetidos.size(); i++){
         std::cout<< array_repetidos[i] << "repetições: " << numero_repeticoes[i] << "\n";
     }
     
     
    return 0;
}