#include<iostream>
#include<locale.h>

using namespace std;

void somar(double n1,double n2){

double soma;
soma=n1+n2;
cout<<"\nA soma é: "<<soma<<endl;
}
void subtrair(double n1,double n2){
	double sub;
	sub=n1-n2;
cout<<"\nA subtração é: "<<sub<<endl;
}
void multiplicar(double n1,double n2){
	double mult;
	mult=n1*n2;
	cout<<"\nA multiplicação é:  "<<mult<<endl;
}
void dividir(double n1,double n2){
	double div;
	div=n1/n2;
	cout<<"\nA divisão é:  "<<div<<endl;
}
int main () {
setlocale(LC_ALL,"portuguese");
int n1,n2,opcao;

cout<<"\n Menu\n1-Somar\n2-Subtrair\n3-Multiplicar\n4-Dividir\n5-Sair\n";
cin>>opcao;

switch(opcao){
case 1:cout<<"digite um número ";
	   cin>>n1;
	   cout<<"digite um número ";
	   cin>>n2;
	   somar(n1,n2);
	   break;
case 2:cout<<"digite um número ";
	   cin>>n1;
	   cout<<"digite um número ";
	   cin>>n2;
	   subtrair(n1,n2);
	   break;
case 3:cout<<"digite um número ";
	   cin>>n1;
	   cout<<"digite um número ";
	   cin>>n2;
	   multiplicar(n1,n2);
	   break;
case 4:cout<<"digite um número: ";
	   cin>>n1;
	   cout<<"digite um número: ";
	   cin>>n2;
	   dividir(n1,n2);
	   break;
case 5:cout<<"\nAté a próxima";
		exit(0);
default:cout<<"\nEscolha uma opção\n";
}

main();

}
