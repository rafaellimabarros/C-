#include<iostream>
#include<locale.h>
using namespace std;
int main (){
	setlocale(LC_ALL,"portuguese");
	int soma=0;
	cout<<"N�meros em sequ�ncia de 1 a 10: \n\n";
	for (int i=1;i<=10;i++){
	cout<< i  <<endl;
		soma=soma+i;
	} cout<< "\nA soma dos n�meros em sequencia �: "<<soma;
}
