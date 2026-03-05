#include <iostream>
using namespace std;
class Image{
   protected:
   int r, g, b;
    
    public:
    Image(int r, int g, int b){
       r = r;
       g = g;
       b = b;
    }
    protected:
    Image(Image& img){
         r = img.r;
         g = img.g;
         b = img.b;

    }
    

  int getR(){
    return r;
  }
  int getG(){
    return g;
  }
  int getB(){
    return b;
  }
  void setR(int r){
    r = r;
  }
  void setG(int g){
    g = g; 
  }
  void setB(int b){
    b = b;
  }
   
};

int main(){

int r, g, b;
cin >> r >> g >> b;
Image tubarao(r,g,b);

cout << tubarao.getR() << endl;
    return 0;
}