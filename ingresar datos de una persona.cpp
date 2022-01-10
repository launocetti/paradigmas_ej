/*hacer un programa que lea los siguientes datos:
edad de tipo entero
sexo de tipo caracter
altura en metros tipo real

luego mostrarlos*/

#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

int main(){
	char nombre[30];
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"Ingrese el nombre: "; cin>>nombre;
	cout<<"ingrese la edad: "; cin>>edad;
	cout<<"ingrese el sexo: "; cin>>sexo;
	cout<<"ingrese la altura en metros: "; cin>>altura;
	
	cout<<"\n************************\n";
	
	cout<<"Nombre: ----------------------"<<nombre<<endl;
	cout<<"Edad: ------------------------"<<edad<<endl;
	cout<<"Sexo: ------------------------"<<sexo<<endl;
	cout<<"Altura en metros: ------------"<<altura<<endl;
	
	return 0;
}

