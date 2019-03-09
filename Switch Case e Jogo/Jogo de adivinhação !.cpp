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
			
		for (int i=0;i<10;i++){			
		
		cin>>chute;
	
		
	if (chute==randon){
		
		cout<<"\nPARABÉNS VOCÊ ACERTOU !!!!!!\n";
		system("pause");
		exit(0);
		
	}else if(chute>randon){
		cout<<"\nChutou alto\n\n";
		
	}else if(chute<randon){
		cout<<"\nChutou baixo\n\n";
	}
	
	}
	
	cout<<"\nGAME OVER\n\n";
	
	break;
		case 2:
			cout<<"Tchau !!";
			exit (0);
			break;
			
				case 3:
			cout<<"\n Rafael Lima\n     & \n José Alexandre";
			break;
	}
	
	
	}



