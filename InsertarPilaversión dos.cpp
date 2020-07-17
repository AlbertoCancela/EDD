#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo{
int dato;
Nodo *siguiente;	
	
};

void agregarPila(Nodo *&, int);  //Prototipos
/*Crear el espacio en memoria para almacenar un nodo.
Cargar el valor dentro del nodo(dato).
Cargar el puntero pila dentro del nodo(*siguiente).
Asignar el nuevo nodo a pila.*/
void eliminarPila(Nodo *&, int &);  //de función.
/*1. Crear una variable *aux de tipo Nodo
2. Igualar el n a aux-dato
3. Pasar pila a siguiente nodo
4. Eliminar aux*/

int main(){

	Nodo *pila=NULL; //igualar pila a un valor vacío. 
	int dato, num=0;
	
	cout<<"digite un número para apilar: "<<endl;
	cin>>dato;
	agregarPila(pila, dato);
	
	cout<<"digite otro número para apilar: "<<endl;
	cin>>dato;
		agregarPila(pila, dato);
		
	cout<<"digite otro número para apilar: "<<endl;
	cin>>dato;
		agregarPila(pila, dato);
	cout<<"Sacando los elementos de la pila: ";
	
	
	while (num<2)//Mientras no sea el final...
	{
  
	num++;
		if (pila != NULL){//hay más elementos
	
				eliminarPila(pila, dato);
			
		cout<<dato<<" , ";
		}
		else
		{
			cout<<"los datos se han eliminado.";
		}
	
	}
	
	getch();
	return 0;
}
 void agregarPila(Nodo *&pila, int n) //Agregar datos
 {
 	Nodo *nuevoNodo = new Nodo();//Crear el espacio en memoria para almacenar un nodo.
 	nuevoNodo -> dato = n; //Cargar el valor dentro del nodo(dato).
 	nuevoNodo -> siguiente = pila;//Cargar el puntero pila dentro del nodo(*siguiente).
 	pila=nuevoNodo;//Asignar el nuevo nodo a pila.
 	
 	cout<<n<<" agregado correctamente a la pila"<<endl;
 }
 
 void eliminarPila(Nodo *& pila, int &n){ //Eliminar Datos
 	Nodo *aux=pila;//1. Crear una variable *aux de tipo Nodo
 	n = aux ->dato;//2. Igualar el n a aux->dato
 	pila = aux ->siguiente;//3. Pasar pila a siguiente nodo
 	delete aux; //4. Eliminar aux*/
 }
