#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo{
int dato;
Nodo *siguiente;	
	
};

void agregarPila(Nodo *&, int);  //Prototipos
void eliminarPila(Nodo *&, int &);  //de funci�n.


int main(){
	Nodo *pila=NULL; //igualar pila a un valor vac�o. 
	int dato;
	
	cout<<"digite un n�mero para apilar: "<<endl;
	cin>>dato;
	agregarPila(pila, dato);
	
		cout<<"digite otro n�mero para apilar: "<<endl;
	cin>>dato;
		agregarPila(pila, dato);
		
	cout<<"digite otro n�mero para apilar: "<<endl;
	cin>>dato;
		agregarPila(pila, dato);
	cout<<"Sacando los elementos de la pila: ";
	
			cout<<"digite otro n�mero para apilar: "<<endl;
	cin>>dato;
		agregarPila(pila, dato);
		
	while (pila != NULL)//Mientras no sea el final...
	{
		eliminarPila(pila, dato);
		if (pila != NULL){//hay m�s elementos
		cout<<dato<<" , ";
		}
		else
		{
			cout<<".";
		}
	}
	
	getch();
	return 0;
}
 void agregarPila(Nodo *&pila, int n) //Agregar datos
 {
 	Nodo *nuevoNodo = new Nodo();
 	nuevoNodo -> dato = n; 
 	nuevoNodo -> siguiente = pila;
 	pila=nuevoNodo;
 	
 	cout<<n<<" agregado correctamente a la pila"<<endl;
 }
 
 void eliminarPila(Nodo *& pila, int &n){ //Eliminar Datos
 	Nodo *aux=pila;
 	n = aux ->dato;
 	pila = aux ->siguiente;
 	delete aux; 
 }
