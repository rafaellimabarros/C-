#include<iostream>
#include<locale.h>
using namespace std;

int main () {
double preco,consumo,total;
setlocale (LC_ALL, "portuguese");
cout<<"escreva o pre�o do kwh"<<endl;
cin>>preco;
cout<<"escreva o consumo"<<endl;
cin>>consumo;
total=preco*consumo;
cout<<"o total a pagar � R$ "<<total;
cout<<" reais";
	
}
