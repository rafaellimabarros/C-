#include<iostream>
using namespace std;
double creditar (double saldo){
	saldo=saldo+2;
	return(saldo);
	
}
int main (){
	double saldo;
	cout<<"saldo";
	cin>>saldo;
	saldo=creditar(saldo);
	cout<<"O valor e: "<<saldo;
}
