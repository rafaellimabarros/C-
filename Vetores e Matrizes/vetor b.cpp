#include<iostream>
using namespace std;
int main (){
int vet[6],soma;


for (int i=0;i<=5;i++){
	cout<<"\nPor favor popule o vetor\n";
	cin>>vet[i];
}
for (int i=0;i<=5;i++){
	soma=soma+vet[i];
}
cout<<"A soma dos vetores e:    "<<soma;
}
