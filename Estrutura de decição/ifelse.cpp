#include <iostream>
#include <locale.h>

using namespace std;


int main() {
	
double num;

setlocale (LC_ALL,"Portuguese");
cout<< "Digite um n�mero"<<endl;
cin>> num;
 if (num==10){
 
cout<<"o n�mero � igual a 10"<<endl;
}else if (num>=10){
	cout<< "O n�mero � maior que 10"<<endl;
}
else{ 
cout<< "o n�mero � menor que 10"<<endl;
}
	
}
