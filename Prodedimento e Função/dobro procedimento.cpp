#include<iostream>
#include<locale.h>
using namespace std;

void dobrar(int n){
	setlocale(LC_ALL,"portuguese");
	int dobro;
	
	dobro=n*2;
	cout<<"o dobro � :"<<dobro;
}

int main () {
	int n;
	cout<<"digite";
	cin>>n;
	dobrar(n);
	
}
