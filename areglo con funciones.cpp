
#include <iostream>
using namespace std;

void llenar(int numeros[], int tamanio) {

    for (int i = 0; i < tamanio; i++) {
        cin >> numeros[i];
    }
}

void buscar(int numeros[], int tamanio, int pos) {

    if (pos >= 0 && pos < tamanio) {
        cout << "El valor en la posicion " << pos << " es: "
             << numeros[pos] << endl;
    } else {
        cout << "Posicion no se encuentra" << endl;
    }
}

int main() {

    int tamanio;
    int pos;

    cout << "Ingrese el tamanio del arreglo: ";
    cin >> tamanio;

    int numeros[tamanio];   

    cout << "Ingrese los valores a llenar: ";
    llenar(numeros, tamanio);     

    cout << "Ingresa la posicion a buscar: ";
    cin >> pos;

    buscar(numeros, tamanio, pos);  

    return 0;
}
