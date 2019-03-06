#include<iostream> 
#include<locale.h>

using namespace std;
int main() {	
int num;
int dobro;
setlocale(LC_ALL, "portuguese");
cout<<"digite um número:"<<endl;
cin>>num;
dobro=num*2;
//vai mutiplica ro numero por 2
cout<<"o dobro é :  "<<endl<<dobro;
//cout<<dobro;
			
}
