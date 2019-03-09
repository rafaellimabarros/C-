#include<iostream>
#include<locale.h>
using namespace std;
int main () {

double altura,base,area;
setlocale(LC_ALL, "portuguese");
cout<<"digite a altura do triangulo"<<endl;
cin>>altura;
cout<<"digite a base"<<endl;
cin>>base;
area=(altura*base)/2;
cout<<"a área do triangulo e: "<<endl<<area;

 }
