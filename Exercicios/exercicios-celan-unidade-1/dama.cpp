#include <iostream>
using namespace std;

int movimentos(int x, int y, int x1, int y1){
    bool nenhum_movimento = x == x1 && y == y1;
    bool um_movimento = ((x == x1) && (y != y1)) || ((x!=x1) && (y==y1)) || (abs(x-x1) == abs(y-y1));
    if(nenhum_movimento){
        return 0;
    }else if(um_movimento){
        return 1;
    }
        return 2;
}
int main(){
int x{};
int y{};
int x1{};
int y1{};
while(true){
    cin >> x >> y >> x1 >> y1;
    bool condicao_parada = ((x == 0) && (y== 0) && (x1 == 0) && (y1 == 0));
    if(condicao_parada){
        break;
    }
    cout << movimentos(x,y,x1,y1) << endl;
}
    return 0;
}
