#include<iostream>
using namespace std;

double AreadoRetangulo (double larg,double alt);

int main(){
double largura,altura;

cout << "informe a largura";
cin >> largura;

cout<<"infome a altura";
cin >> altura;

double resultado = AreadoRetangulo(largura,altura);

cout << "A area do reangulo e: "<< resultado << endl;

system("pause");
return 0;

	
}

double AreadoRetangulo(double larg,double alt){
	return larg * alt;
	
}
	

