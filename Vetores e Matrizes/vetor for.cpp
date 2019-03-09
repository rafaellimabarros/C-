#include<iostream>
using namespace std;

int main (){
int vet[10];

for(int i=0;i<=9;i++){   // primeiro for para entrada
cout<<"\ndigite:\n ";
cin>>vet[i];
}
for(int i=0;i<=9;i++){ // segundo for para processamento
vet[i]=vet[i]+2;
}
for(int i=0;i<=9;i++){   //segundo for para saída
cout<<vet[i]<<endl;
}

}
