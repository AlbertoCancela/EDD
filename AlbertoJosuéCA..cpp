#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

int main(){
    ////                       ////
	setlocale(LC_ALL, "Spanish");
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	////	                  ////
	float mc;
	cout<<"Escribe los metros c�bicos que quieras convertir a litros "<<endl;
	cout<<"nota: escribe un n�mero real"<<endl;
	cin>>mc;
	
	mc*=1000;
	
	cout<<"Los litros que equivalen esos metros c�bicos son: "<<mc;
	
	return 0;
}
