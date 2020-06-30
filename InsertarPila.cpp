#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo{
int dato;
Nodo *siguiente;	
	
};

void agregarPila(Nodo *&, int);

int main(){
	Nodo *pila=NULL; 
	int n1, n2;
	
	cout<<"digite un número para apilar: "<<endl;
	cin>>n1;
	agregarPila(pila, n1);
	
		cout<<"digite otro número para apilar: "<<endl;
	cin>>n2;
		agregarPila(pila, n2);
	
	getch();
	return 0;
}
 void agregarPila(Nodo *&pila, int n)
 {
 	Nodo *nuevoNodo = new Nodo();
 	nuevoNodo -> dato = n; 
 	nuevoNodo -> siguiente = pila;
 	pila=nuevoNodo;
 	
 	cout<<n<<" agregado correctamente a la pila"<<endl;
 }
