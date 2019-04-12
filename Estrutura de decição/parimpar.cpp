#include<iostream>
using namespace std;

const int PAR = 0;
const int IMPAR = 1;

int ParImpar(int n){
	int ehpar = 0;
	if(n % 2 != 0) ehpar = IMPAR;
	return ehpar; 
}

int main(){
	int num;
	int resultado;
	
	cout << "informe um numero: ";
	cin >> num;
	
	resultado = ParImpar(num);
	
	if(resultado == PAR){
		cout << "e par"<<endl;
	}else{
		cout << "e impar"<<endl;
	}
	
	system("pause");
	return 0;
}

