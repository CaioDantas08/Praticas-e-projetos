#include <iostream>
using namespace std;

int main(){
    int x{};
    int y{};
    cin >> x >> y;
    if(x>y){
    int temp = x;
    x = y;
    y = temp;
    }
    int soma{};
    for (int i = x+1; i < y; i++){   
        if(i % 2 == 1 || i % 2 == -1){
        soma+=i;
        } 
    }
    cout << soma << endl;
    return 0;
}