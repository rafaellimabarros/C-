#include<iostream>
using namespace std;
int dobrar(int n){
	int dobro;
	dobro=n*2;
	return(dobro);
}


int main () {
	int n,r;
	cout<<"digite um valor";
	cin>>n;
	r=dobrar(n);//o valor n é o parametro
	cout<<"O dobro e: "<<r;
}
