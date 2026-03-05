#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double distancia(double x1, double y1, double x2, double y2){
    double distancia = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    return distancia;
}
int main(){
   double x1{};
   double x2{};
   double y1{};
   double y2{};
   cin >> x1 >> y1 >> x2 >> y2;
   double valor_final = distancia(x1,y1,x2,y2);
   cout << fixed << setprecision(4) << valor_final << endl;
       return 0;
}