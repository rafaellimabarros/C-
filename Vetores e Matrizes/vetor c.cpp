#include<iostream>
using namespace std;
int main (){
int vet[6];

for (int i=0;i<=5;i++){
	cout<<"Digite";
	cin>>vet[i];
}

cout<<"Os numeros pares sao:  ";

for (int i=0;i<=5;i++){
	if (vet[i] % 2 == 0){
		cout<<"\n"<<vet[i];
	}
}
}
