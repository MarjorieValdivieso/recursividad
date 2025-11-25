#include<iostream>
using namespace std;
int main(){
	int tamanio;
	int numeros[tamanio];
	
	cout<<"Ingrese cuantos elementos tendra el arreglo: ";
	cin>>tamanio;
	cout<<"Ingrese los valores para completar el arreglo: ";
	for(int i=0;i<tamanio;i++){
		cin>>numeros[i];
		
	}
	cout<<"Los numeros ingresados son:";
	for(int i=0;i<tamanio;i++){
		cout<<numeros[i]<<endl;
	}
	
int pos;
    cout << "Ingrese la posición que desea consultar: "<<endl;
    cin >> pos;

    if (pos >= 0 && pos < tamanio) {
        cout << "El valor en la posición " << pos << " es: "
             << numeros[pos] << endl;
    } else {
        cout << "Posicion fuera de rango." << endl;
    }
	return 0;
}
