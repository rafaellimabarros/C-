#include <iostream>
#include <locale.h>

using namespace std;


int main() {
	
double num;

setlocale (LC_ALL,"Portuguese");
cout<< "Digite um número"<<endl;
cin>> num;
 if (num==10){
 
cout<<"o número é igual a 10"<<endl;
}else if (num>=10){
	cout<< "O número é maior que 10"<<endl;
}
else{ 
cout<< "o número é menor que 10"<<endl;
}
	
}
