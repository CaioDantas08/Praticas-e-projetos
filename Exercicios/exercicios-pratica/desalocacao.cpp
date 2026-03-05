#include <iostream>
using namespace std;
int main(){
	int array[] = {1,2,18,20,18,12};
	int tamanhoDoArray = sizeof(array) / sizeof(array[0]);

	for(int i = 0; i < tamanhoDoArray; ++i){
	  for(int j = i+1; j < tamanhoDoArray; ++j){
	if(array[j] == array[i]){
	array[j] = array[j+1];
	tamanhoDoArray-1;
	}
        }
	for(int k = 0;k < tamanhoDoArray; k++){
	cout << array[i] << endl;
	}
	}
	return 0;
}
