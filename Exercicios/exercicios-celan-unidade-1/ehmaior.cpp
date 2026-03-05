#include <iostream>
using namespace std;

int maior(int a, int b){
    int maior = ((a+b)+abs(a-b))/2;
    return maior;
}
int main(){
    int a{};
    int b{};
    int c{};
  cin >> a >> b >> c;
  int x = maior(a,b);
  int y = maior(x,c);
  if(x>y){
    cout << x << " eh o maior";
  }else{
    cout << y << " eh o maior";
  }
  cout << endl;

    return 0;
}
