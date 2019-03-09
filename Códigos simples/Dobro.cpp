#include<iostream>
#include<locale.h>
using namespace std;
int main () {

double num,dobro;

setlocale(LC_ALL, "portuguese");
cout<<"Digite um número"<<endl;
cin>>num;
dobro=num*2;
cout<<"O dobro é: "<<endl<<dobro;
	
	
}
