#include<iostream>
#include<locale.h>
using namespace std;
int main (){
setlocale(LC_ALL,"portuguese");
double mat[3][3];
for(int l=0;l<3;l++){
for(int c=0;c<3;c++){
	cout<<"Digite um n�mero: ";
	cin>>mat[l][c];
}
}
for(int l=0;l<3;l++){
for(int c=0;c<3;c++){
	cout<<mat[l][c]<<" ";
}
cout<<endl;
}
}
