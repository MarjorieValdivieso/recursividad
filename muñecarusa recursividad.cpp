#include<iostream>
using namespace std;
void abrirmuñeca(int num){
	if(num==1){
		cout<<"Abrir la muñeca";
		return;
	}
	cout<<"ABRIENDO MUÑECA"<<num<<endl;
	abrirmuñeca(num-1);
}

int main(){
	abrirmuñeca(8);
	return 0;
}
