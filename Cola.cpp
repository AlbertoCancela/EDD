#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};
//Prototipos de función
void InsCola(Nodo *&, Nodo *&, int);
bool codaVotuo(Nodo *);
void ElimCola(Nodo *&, Nodo *&, int &);
int main(){
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	int dato, c;

    cout<<"Cuantos elementos deseas poner en la cola?";
    cin>>c;
    
for (int i=1; i<=c; i++){
	cout<<"\n Digite el elemento "<<i<<":";
	cin>>dato;
	InsCola(frente, fin, dato);
	}
	
	//Eliminar los elementos de la cola
    cout<<endl;
    cout<<"quitando elementos..."<<endl;
	while (frente != NULL){
	ElimCola(frente, fin, dato);
		if (frente!= NULL){
			cout<<dato<<" , ";
		}
		else{
			cout<<dato<<".";
		}
	}
	
	getch();
	return 0;
}
//Función de insertar.
void InsCola (Nodo *&frente, Nodo *&fin, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=NULL;
	
	if (codaVotuo(frente)){
		frente=nuevo_nodo;
	}
	else{
		fin->siguiente=nuevo_nodo;
	}
		fin=nuevo_nodo;
		cout<<"\t Elemento "<<n<<" insertado correctamente"<<endl;
}
//función de cola vacía
bool codaVotuo(Nodo *frente){
return (frente ==NULL)? true : false;
}
//función de eliminar.
void ElimCola(Nodo *&frente, Nodo *&fin, int &n){
	n=frente->dato;
	Nodo *aux = frente;
	if (frente == fin){
	frente=NULL;
	 fin=NULL;
	}
	else {
	frente=frente->siguiente;
	} 
	delete aux;
}
