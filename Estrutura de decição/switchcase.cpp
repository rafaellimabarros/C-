#include <iostream>
#include <locale.h>
using namespace std;

int main() {
int opcao;
setlocale (LC_ALL, "portuguese");
cout<<"escolha o numero da sua bebida"<<endl;
cin>>opcao;
if(opcao==1){
	cout<<"voc� escolheu coca-cola";
}else if(opcao==2){
	cout<<"Voc� escolheu Suco de laranja";
}else if(opcao==3){
	cout<<"voc� escolheu suco de uva";
}else if(opcao==4){
	cout<<"voc� escolheu soda";
}else if(opcao==5){
	cout<<"catuaba";
}else {

cout<<"n�o existe";
}
	
}
