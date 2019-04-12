#include<iostream>
#include<cstdlib>
#include<ctime>
#include<locale.h>
using namespace std;
	int main (){
		setlocale(LC_ALL,"portuguese");
		int randon,chute,menu;
	
		srand(time(0));
			randon = rand() % 101;
		
			cout<<"   MENU\n-----------\n 1-JOGAR\n 2-SAIR\n 3-CREDITOS\n";
			cin>>menu;
			
	switch(menu){
		case 1: 
		
		cout<<"REGRAS\nO programa vai gerar um número aleatório de 0 a 100 e você tem 10 tentativas de erro para acertar o número\n\nBoa sorte!\n";
			cout<<"Chute o numero de 0 a 100"<<endl;
			
		for (int i=1;i<11;i++){			
		
		cin>>chute;
	
		
	if (chute==randon){
		
		cout<<"\nACERTOU MIZERAVI!!!\n";
		system("pause");
		exit(0);
		
	}else if(chute>randon){
		cout<<"\nChutou alto\n\n";
		
	}else if(chute<randon){
		cout<<"\nChutou baixo\n\n";
	}
	cout << "\nVocê está na sua tentativa:" << i <<endl ;
	}
	
	cout<<"\nVocê perdeu\n\n";
	
	break;
		case 2:
			cout<<"Saia daqui seu cachorro";
			exit (0);
			break;
			
				case 3:
			cout<<"Criador: Rafael Lima\nDesenvolvedor: Rafael Lima\nPesquisador: Rafael Lima\nIdealizador: Rafael Lima\n";
			break;
	}
	
	
	}



