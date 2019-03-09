#include<iostream>
#include<locale.h>
using namespace std;
int main (){
setlocale(LC_ALL,"portuguese");
char mat[3][3];
	
	for(int l=0;l<3;l++){
		for(int c=0;c<3;c++){
			cout<<"digite a letra\n";
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
