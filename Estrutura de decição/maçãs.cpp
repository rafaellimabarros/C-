#include<iostream>
#include<locale.h>
using namespace std;
int main () {
	double qm,preco;
	setlocale(LC_ALL,"portuguese");
	cout<<"Quantidade de ma��s"<<endl;
	cin>>qm;
	if (qm<12){
		preco=qm*1.30;
		cout<<"O pre�o a pagar �: "<<endl<<preco;
	}else{
		preco=qm*1.00;
		cout<<"O pre�o a pagar �: "<<preco;
		cout<< " reais";
	}
	
}
