#include<iostream>
#include<locale.h>
using namespace std;

int main (){
int vet[6],opcao,soma=0;
setlocale(LC_ALL,"portuguese");

cout<<"\nMENU\n1-Dobrar\n2-soma dos vetores\n3-vetor par\n4-inverso";
cin>>opcao;

switch(opcao){ 
case 1:
for (int i=0;i<=5;i++){
	cout<<"\nPor favor popule o vetor\n";
	cin>>vet[i];
	vet[i]=vet[i]*2;
	}
	for (int i=0;i<=5;i++){
	cout<<"\nO resultado do dobro e:  "<<vet[i]<<endl;
	
	}break;
	
case 2:
	for (int i=0;i<=5;i++){
	cout<<"\nPor favor popule o vetor\n";
	cin>>vet[i];
	}
	for (int i=0;i<=5;i++){
	soma=soma+vet[i];
	}
	cout<<"A soma dos vetores é:    "<<soma;break;

case 3:
	for (int i=0;i<=5;i++){
	cout<<"Digite";
	cin>>vet[i];
	}
	cout<<"Os numeros pares sao:  ";
	for (int i=0;i<=5;i++){
	if (vet[i] % 2 == 0){
		cout<<"\n"<<vet[i];
	}
	}break;
case 4:
	for (int i=0;i<=5;i++){
	cout<<"\nPor favor popule o vetor\n";
	cin>>vet[i];
}
for (int i=5;i>=0;i--){
	cout<<"\nos vetores sao "<<vet[i]<<endl;
}break;
}
}

