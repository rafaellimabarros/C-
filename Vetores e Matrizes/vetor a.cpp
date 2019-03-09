#include<iostream>
using namespace std;
int main (){
int vet[6];

for (int i=0;i<=5;i++){
	cout<<"\nPor favor popule o vetor\n";
	cin>>vet[i];
	vet[i]=vet[i]*2;
}
for (int i=0;i<=5;i++){
	cout<<"\nO resultado do dobro e:  "<<vet[i]<<endl;
}

}
