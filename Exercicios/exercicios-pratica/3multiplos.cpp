#include <iostream>
using namespace std;

void multiplos(int n){
    int array[3];
    for (int i = 0; i < n; i++){
    if(i*(i+1)*(i+2) == n){
    array[0] = i;
    array[1] = i+1;
    array[2] = i+2;
    }else{
        cout << "Não há multiplos" << endl;
        break;
    }
    }

    if(array[0] != nullptr){
        for (int i = 0; i < 3; i++){
        cout << "Multiplos: " << array[i];
         }   
    }
    cout << endl;

    
    
}

int main(){
    int n{};
    cin >> n;
    multiplos(n);
    return 0;

}