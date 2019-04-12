#include<iostream>
#include<locale.h>
using namespace std;
int main () {	
double idade;
setlocale(LC_ALL,"portuguese");
cout<<"digite a sua idade"<<endl;
cin>>idade;
if(idade<16){
	cout<<"Não pode votar otario";
}else if (idade>=18 & idade<70){
	cout<<"voto obrigatório";
}else {
		cout<<"Voto facultativo";
}
}

