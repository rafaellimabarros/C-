#include <iostream>
#include <locale.h>
using namespace std;

int main() {
setlocale (LC_ALL, "portuguese");//cout<<"MENU\n"; pula linha
cout<<"MENU"<<endl;
cout<<" 1-Coca-cola\n 2-S.laranja\n 3-S.de uva\n 4-soda\n 5-catuaba\n";
int opcao;
cin>>opcao;
switch(opcao){
	case 1:cout<<"Coca-cola";break;
	case 2:cout<<"suco de laranja";break;
	case 3:cout<<"suco de uva";break;
	case 4:cout<<"soda";break;
	case 5:cout<<"catuaba";break;
	default:cout<<"digite o numero de acordo com o menu, retardado";
		
}
main ();
}
