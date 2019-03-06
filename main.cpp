#include <iostream>
#include <math.h>
#include<locale.h>

using namespace std;
int main() {
int base,expo;
double x;
setlocale(LC_ALL, "portuguese");
cout<<"Digite o numero base"<<endl;
cin>>base;
cout<<"digite o expoente"<<endl;
cin>>expo;
x=base / expo;
cout<<"o resultado é: "<<endl<<x;


}
