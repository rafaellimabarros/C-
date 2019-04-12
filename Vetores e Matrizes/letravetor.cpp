#include<iostream>
#include<cstring>
using namespace std;

const int TAM=10;

int main (){
	int numeros[TAM];
	int i;
	
	for(i = 0; i<TAM;i++){
		cout << "difite o " << i + 1 << "o numero: ";
		cin >> numeros[i];
	}
	for(i = 0; i<TAM;i++){
		if(numeros[i]%2 ==0){
		
		cout << "numeros[" << i << "] : é par " << numeros[i] << endl;
}
}


system("pause");
return 0;
}
