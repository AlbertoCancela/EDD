//Algoritmo que ordena de manera ascendente y descendente el siguiente arreglo usando burbuja
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main(){
	int numero[] = {4,1,2,3,5}; //declaración desde el inicio de los datos en el arreglo
	int i, j, aux; //declaración de los tipos de datos que utilizaremos en los bucles
	
	for (i=0; i<5; i++) //Bucle principal
	{
	for (j=0; j<5; j++)//bucle anidado para ordenar los datos con un condicional
	{
		if (numero[j]>numero[j+1]) //Condicional con propósito de ordenar los números (si el actual es mayor al siguiente
		{aux = numero[j]; numero[j] = numero [j+1]; numero[j+1] = aux;}//cambian de posición hasta encontrar un orden)
	}
	}
	//Lo ligero nunca se hunde en lo denso.
	cout<<"Ascendente: "<<endl;//ordenamiento de mayor a menor
	for(i=0; i<5; i++){
		cout<<numero[i]<<endl;
	}
	cout<<"\n Descendente: "<<endl;//ordenamiento de menor a mayor
	for(i=4; i>=0; i--){
		cout<<numero[i]<<endl;
	}
	getch();
	return 0;
}
