#include<iostream>
using namespace std;
int main (){
int vet[10],maior;

for(int i=0;i<=9;i++){
	cout<<"Popule o vetor"<<endl;
	cin>>vet[i];
}
maior=vet[0];

for(int i=0;i<=9;i++){
	if(vet[i]>maior){
		maior=vet[i];
	}
	
}
cout<<"o menor e:  "<<maior;
}

