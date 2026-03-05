#include <iostream>
#include <fstream>
using namespace std;

struct Cor {
public:
    int red;
    int green;
    int blue;
public:
    Cor(int r = 0, int g = 0, int b = 0) {
        red = r;
        green = g;
        blue = b;
    }
    void print_Cor() {
        cout << "RGB(" << red << "," << green << "," << blue << ")";
    }
};

class Paleta {
private:
    int quantidade = 0; 
    Cor cores[100];
    double valores[100]; 
public:
    void Adcionar_Cor(double valor, Cor cor){ 
        if (quantidade >= 100) {
            cout << "Paleta completamente cheia!\n" << endl;
            return;
        }
        
        int i = quantidade - 1;
        while (i >= 0 && valores[i] > valor) {
            valores[i+1] = valores[i];
            cores[i+1] = cores[i];
            i--;
        }
        valores[i+1] = valor;
        cores[i+1] = cor;
        quantidade++;
    }

    void carregar_Arquivo(string nomeArquivo) {
        ifstream arquivo(nomeArquivo);
        if (!arquivo) {
            cout << "Erro ao abrir arquivo!\n";
            return;
        }
        
        arquivo >> quantidade;
        for (int i = 0; i < quantidade; i++) {
            arquivo >> valores[i] >> cores[i].red >> cores[i].green >> cores[i].blue;
        }
        arquivo.close();
    }

    Cor getCor(double valor) {
        if (quantidade == 0) return Cor();
        
        for (int i = 0; i < quantidade; i++) {
            if (valor <= valores[i]) {
                return cores[i];
            }
        }
        return cores[quantidade-1]; 
    }

    void mostrar() {
        cout << "Paleta (" << quantidade << " cores):\n";
        for (int i = 0; i < quantidade; i++) {
            cout << valores[i] << ": ";
            cores[i].print_Cor();
            cout << endl;
        }
    }
};

int main() {

    Paleta p1;
    p1.Adcionar_Cor(0.0, Cor(255, 0, 0));   
    p1.Adcionar_Cor(50.0, Cor(0, 255, 0));   
    p1.Adcionar_Cor(100.0, Cor(0, 0, 255));  
    
    cout << "=== Paleta Manual ===" << endl;
    p1.mostrar();
    
    cout << "\nTestes de consulta:" << endl;
    cout << "-10.0: "; p1.getCor(-10.0).print_Cor(); cout << endl;
    cout << "25.0: "; p1.getCor(25.0).print_Cor(); cout << endl;
    cout << "75.0: "; p1.getCor(75.0).print_Cor(); cout << endl;
    cout << "150.0: "; p1.getCor(150.0).print_Cor(); cout << endl;
  
   
    Paleta p2;
    cout << "\n=== Paleta do Arquivo ===" << endl;
    p2.carregar_Arquivo("paleta.txt");
    p2.mostrar();

    Cor cor4(255,255,0);
    Cor cor5(255,255,0);
    Paleta p3;
    p3.Adcionar_Cor(10,cor4);
    p3.Adcionar_Cor(10,cor5);
    cout << "----------" << endl;
    p3.mostrar();

    
    
    
    return 0;
}