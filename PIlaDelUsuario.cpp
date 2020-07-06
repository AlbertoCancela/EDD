#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;
struct Nodo{
int dato;
Nodo *siguiente;
};
void agregarPila(Nodo *&, int); 
void eliminarPila(Nodo *&, int &);

int main()
{ 
/////////////////////////////////////////////////////////
	setlocale(LC_ALL, "Spanish");
	SetConsoleCP(1252);          
	SetConsoleOutputCP(1252);
	system ("cls");
////////////////////////////////////////////////////////
Nodo *pila=NULL; //igualar pila a un valor vacío. 
Nodo *aux=NULL;
int dato, s;
int NumE;
char selec;
char letra;
for (int k=1; k<=6; k++)
{	system ("cls");
cout<<"Agregar datos (presione A)\n";
cout<<"Eliminar datos (presione B)\n";
cout<<"Salir del programa (presione C)\n";
cin>>letra;
selec=toupper(letra);
switch(selec)
{case 'A': 
cout<<"Cuántos datos tendrá la pila\n";
cin>>NumE;
	system ("cls");
	if (NumE==0)
	{
	cout<<"No se apilaron datos.";
	}
	else{	
for (int i=1; i<=NumE; i++){

	cout<<"\n digite el dato "<<i<<" para apilar: "<<endl;
	cin>>dato;
	agregarPila(pila, dato);}
}
getch();
break;
case 'B':
if (dato==NULL)
{	cout<<"No hay elementos por eliminar";
	getch();
	return main();
}
else{
cout<<"Eliminando datos...\n";
   while (pila != NULL)//Mientras no sea el final...
	{	if (pila != NULL){//hay más elementos
		eliminarPila(pila, dato);
		cout<<dato<<" , "; 
		}
		else if (pila ==NULL)
		{
		cout<<"los datos se han eliminado.";
		}
	}
	cout<<"...los datos se han eliminado.";

}   getch();
	return main();
	case 'C': 
	return 0;
	break;
	default:
	cout<<"Elige por favor una opción válida"<<endl;
	getch();
}
}
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
