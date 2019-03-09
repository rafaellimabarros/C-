#include <iostream>
#include <locale.h>
using namespace std;

int main() {
setlocale (LC_ALL, "portuguese");
int contador=0; //inicio
do{
	cout<<"Rafael\n"<<endl;
	contador=contador+1; //incremento
}while(contador<=9);//condição de parada
} 

