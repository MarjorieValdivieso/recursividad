#include<iostream>
using namespace std;
int main(){
	string nombre[3];
	int edad[3];
	cout<<"Ingresa 3 nombre: ";
	for(int i=0;i<3;i++){
		cin>>nombre[i];
	}
	cout<<"Ingresa 3 edades:";
	for(int i=0;i<3;i++){
		cin>>edad[i];
	}
	for(int i=0;i<3;i++){
		cout<<"Nombres:"<<nombre[i]<<edad[i]<<endl;
	}
	return 0;
}
