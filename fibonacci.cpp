#include <iostream>
using namespace std;
//recurisivididad con for

int fibonacci(int n){
	if(n==0)return 0;
	if(n==1) return 1;
	return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
	int n;
	cout<<"INGRESE CUANTOS DATOS QUIERE INGRESAR:";
	cin>>n;
	cout<<"Serie de fibonacci"<<endl;
	for(int i=0;i<n;i++){
		cout<<fibonacci(i)<<" ";
	}
	return 0;
}
/*void imprimirFibo(int a, int b, int i, int n) {
    if (i == n) return;       

    int c = a + b;
    cout << c << " ";         

    imprimirFibo(b, c, i + 1, n);
}

int main() {
    int n = 5;
    int a = 0, b = 1;

    cout << a << " " << b << " ";   

    imprimirFibo(a, b, 2, n);

    return 0;
}*/

/*
#include <iostream>
using namespace std;

void fiboRecursivo(int a, int b, int n) {
    if (n == 0) return;          

    int c = a + b;              
    cout << c << " ";            

    fiboRecursivo(b, c, n - 1); 
}

int main() {
    int a = 0;   
    int b = 1;   

    cout << a << " " << b << " ";   

    fiboRecursivo(a, b, 3);         

    return 0;
}
*/
