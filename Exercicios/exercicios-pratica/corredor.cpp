#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int array[n];
    
    int maior = 0;
    for (int i = 0; i < n; i++){
        cin >> array[i];

    }
    for (int ix = 0; ix < n; ix++){
        for (int j = n; j > 0; j--)
        {
        int soma = 0; 
         soma+=array[j];
          if(soma > maior){
            maior = soma;
          }
        }
        
    }
    
    cout << maior << endl;
    

    return 0;
}