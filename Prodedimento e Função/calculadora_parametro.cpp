#include<iostream>
using namespace std;

int somar (double n1, double n2){
	int soma;
	soma=n1+n2;
	return(soma);
	
}int main (){
	int n1,n2,resul;
	cout<<"numero\n";
	cin>>n1;
	cout<<"numero\n";
	cin>>n2;
	resul=somar(n1,n2);
	cout<<"a soma e: "<<resul;
}
