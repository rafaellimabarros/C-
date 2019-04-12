#include<iostream>
#include<locale.h>
#include<cstdlib>
#include<ctime>
using namespace std;

double ganha(double saldo){
	saldo=saldo+5;
	return(saldo);
}
double perde(double saldo){
	saldo=saldo-10;
	return(saldo);
}
int main (){
	setlocale(LC_ALL,"portuguese");
	double saldo,ran,r1;
	srand(time(0));
	ran= rand()%10;
	srand(time(0));
	saldo=rand() %500;
	cout<<"O seu saldo é:   "<<saldo<<endl;
	cout<<"Quem é o presidente do brasil?\n1-Michel\n2-lula\n";
	cin>>r1;
	if(r1==1){
		cout<<"\nacertou e ganhou 5 pontos";
		saldo=ganha(saldo);
		cout<<"\nO seu saldo atual é:"<<saldo<<endl;
	}else{
		cout<<"\nErrou e perdeu 10 pontos\n";
		saldo=perde(saldo);
		cout<<"\nO seu saldo atual é:  "<<saldo<<endl;
	}cout<<"\nQual o meu nome?\n1-rafael\n2-joão\n3-pedro";
	cin>>r1;
	if(r1==1){
		cout<<"\nacertou e ganhou 5 pontos";
		saldo=ganha(saldo);
		cout<<"\nO seu saldo atual é:"<<saldo<<endl;
	}else{
		cout<<"\nErrou e perdeu 10 pontos\n";
		saldo=perde(saldo);
		cout<<"\nO seu saldo atual é:  "<<saldo<<endl;
	}
	//for(int i=0;i<=ran;i++){
	//	saldo=perde(saldo);
	//	}
	//cout<<"\nO seu saldo é: "<<saldo;
    }
