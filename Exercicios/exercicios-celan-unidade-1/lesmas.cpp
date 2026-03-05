#include <iostream>
using namespace std;


int veloz(int velocidades[], int quantidade){
    int mais_veloz = -1;
    for (int i = 0; i < quantidade; i++){
        if(velocidades[i] > mais_veloz){
            mais_veloz = velocidades[i];
        }
    }
    return mais_veloz;
}

int main(){

    while(true){
        int lesmas{};
        cin >> lesmas;
        if(lesmas == 0){
            break;
        }
        int velocidades[lesmas];
        for (int i = 0; i < lesmas; i++){
        cin >> velocidades[i];  
        }
        if(veloz(velocidades,lesmas) < 10){
            cout << "1" << endl;
        }else if(veloz(velocidades,lesmas) >=10 && veloz(velocidades,lesmas) < 20){
            cout << "2" << endl;
        }else{
            cout << "3" << endl;
        }
    }

    return 0;
}