#include<iostream>
#include<locale.h>
using namespace std;
int main () {
	double qm,preco;
	setlocale(LC_ALL,"portuguese");
	cout<<"Quantidade de maçãs"<<endl;
	cin>>qm;
	if (qm<12){
		preco=qm*1.30;
		cout<<"O preço a pagar é: "<<endl<<preco;
	}else{
		preco=qm*1.00;
		cout<<"O preço a pagar é: "<<preco;
		cout<< " reais";
	}
	
}
