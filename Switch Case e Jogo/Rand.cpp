#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main (){
	int randon,chute;

	srand(time(0));
		randon = rand() % 101;
		cout<<randon<<endl;
		
for (int i=0;i<10;i++){			
	cout<<"adivinhe o numero de 0 a 100\n"<<endl;
	cin>>chute;

	
if (chute==randon){
	cout<<"\nacertou mizeravi\n";
	system("pause");
	exit(0);
}else if(chute>randon){
	cout<<"\nChutou alto\n";
	
}else if(chute<randon){
	cout<<"\nChutou baixo\n";
}
}
cout<<"\nVocê perdeu\n";
}



