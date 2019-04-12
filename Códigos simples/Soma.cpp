#include<iostream>
#include<locale.h>
using namespace std;

void somar(double n1,double n2){
	setlocale(LC_ALL,"portuguese");
double soma;
soma=n1+n2;
cout<<"a soma é: "<<soma;
}

int main () {
int n1,n2;
cout<<"digite um número";
cin>>n1;
cout<<"digite um número";
cin>>n2;
somar(n1,n2);
	
}
