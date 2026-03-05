#include <iostream>
using namespace std;
int main() {
    int m = 2;
    int n = 2;
   while(m!=0 || n!=0){
       cin >> m >> n;
       if(m<= 0 || n <= 0){
        break;
       }
       int soma{};
    if(n>m){
    int temp = n;
    n = m;
    m = temp;
    }
 for(int i = n; i<=m;i++){
     soma+=i;
     cout << i << " ";
 }   
 cout << "Sum=" << soma << endl;
   }

    
 
    return 0;
}
