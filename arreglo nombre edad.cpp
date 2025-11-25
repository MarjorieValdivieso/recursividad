#include<iostream>
using namespace std;
void nombre(string nombres[3]){

	cout<<"Ingresa los 3 nombres:";
	for(int i=0;i<3;i++){
		cin>>nombres[i];
	}
	
}
void edad(int edades[3]){
	
	cout<<"Ingresa las 3 edades: ";
	for(int i=0;i<3;i++){
		cin>>edades[i];
	}
}
void mostrar(string nombres[3],
	int edades[3]){


		for(int i=0;i<3;i++){
			cout<<"Nombres: "<<nombres[i]<<" "<<"edades"<<edades[i]<<endl;
		}
		
}
int main(){
		string nombres[3];
		int edades[3];
	nombre(nombres);
	edad(edades);
	mostrar(nombres ,edades);
	return 0;
		
	
}
