#include<iostream>
#include<locale.h>
using namespace std;

int main (){
int vet[6],opcao,soma=0,contador=0;
setlocale(LC_ALL,"portuguese");

for (int i=0;i<=5;i++){
	cout<<"Digite";
	cin>>vet[i];
	}
	cout<<"Os numeros pares sao:  ";
	for (int i=0;i<=5;i++){
	if (vet[i] % 2 == 0){
		cout<<"\n"<<vet[i];
	}
	if(vet[i]%2==0){
		contador++;
	}
	}
cout<<"\na quantidade de numeros pares é:  "<<contador;	
}
