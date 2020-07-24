//Algoritmo que ordena de manera ascendente y descendente el siguiente arreglo usando selección
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[] = {3,4,5,2,1};
	int i,j,aux,min;
	
	//Algoritmo del Ordenamiento por Selección
	for(i=0;i<5;i++){ //reccorrer el arreglo con el bucle
		min = i; //mínimo será igual a i
		for(j=i+1;j<5;j++){ 
			if(numeros[j] < numeros[min]){//condicional en el que nos daremos cuenta con comprobación si
				min = j;                     //el número en la posición 0 es menor a los demás números del arreglo. 
			}
		}
		aux = numeros[i]; 
		numeros[i] = numeros[min]; 
		numeros[min] = aux;
	}
	
	
	cout<<"Ascendente: "<<endl;
	for(i=0;i<5;i++){
		cout<<numeros[i]<<endl;
	}
	
	cout<<"\nDescendente: "<<endl;
	for(i=4;i>=0;i--){
		cout<<numeros[i]<<endl;
	}
	
	getch();
	return 0;
}
