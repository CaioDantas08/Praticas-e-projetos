#include <iostream>
using namespace std;

int main(){
    int n1{};
    int n2{};
    int n3{};
    cin >> n1 >> n2 >> n3;
    //Array de ordenacao em ordem crescente
    int ordenacao[3] = {n1,n2,n3};
    for (int i = 0; i < 2; ++i){
    for (int j = 0; j < 2; ++j){
       if(ordenacao[j]>ordenacao[j+1]){
        int temp{};
        temp = ordenacao[j];
        ordenacao[j] = ordenacao[j+1];
        ordenacao[j+1] = temp;
       }
    }
    }
    for (int k = 0; k < 3; ++k){
        cout << ordenacao[k] << endl;
    }
    cout << endl;
    cout << n1 << endl;
    cout << n2 << endl;
    cout << n3 << endl;
    return 0;
}