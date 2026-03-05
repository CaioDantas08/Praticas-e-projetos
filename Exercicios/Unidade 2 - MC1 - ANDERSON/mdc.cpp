#include <iostream>
#include <cstdlib>
using namespace std;

int mdc(int a, int b){
    a = abs(a);
    b = abs(b);
   if(a>b){
    while(b != 0){
        int resto = a % b;
        cout << a << " mod " << b << " = " << resto << endl;
        a = b;
        b = resto;
      
    }
     cout<< "O mdc é ";
    return a;
   }else{
       while(a != 0){
        int resto = b % a;
        cout << b << " mod " << a << " = " << resto << endl;
        b = a;
        a = resto;
        // cout << b << endl;
    }
    cout<< "O mdc é ";
    return b;

   }

}

int main(){
    int a, b;
    cin >> a >> b;

    cout << mdc(a,b) << "." << endl;
   
    return 0;
}


