#include<iostream>
#include<locale.h>
using namespace std;
int main () {
	double n1,n2,n3,n4,ma;
	setlocale(LC_ALL, "portuguese");
	cout<<"Digite a n1"<<endl;
	cin>>n1;
	cout<<"Digite a n2"<<endl;
	cin>>n2;
	cout<<"Digite a n3"<<endl;
	cin>>n3;
	cout<<"Digite a n4"<<endl;
	cin>>n4;
	ma=(n1+n2+n3+n4)/4;
	
	if(ma>=7.0){
		cout<<"Você passou com "<<ma;
	
	}else{
		cout<<"jumento"<<endl;
		cout<<"ficou reprovado com a nota: "<<ma;
		
	}



}

