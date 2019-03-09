#include<iostream>
#include<locale.h>
using namespace std;

void dobrar(){
int n,dobro;
setlocale(LC_ALL, "portuguese");
cout<<"digite um numero para o dobro";
cin>>n;
dobro=n*2;
cout<<"O dobro é: "<<dobro;	
}

int main () {
dobrar();
}
