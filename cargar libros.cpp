#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

int main(){
	
	string libros[2][2];
	cout<<"\n ***** ingresar informacion de los libros*****:\n";
	string titulo , autor;
	
	for(int i=0; i<2; i++)
	{
		cout<<"libro "<< i+1;
		cout<< "titulo: ";
		getline(cin, titulo);
		cout<< "autor: ";
		getline(cin, autor);
		libros[i][0] = titulo;
		libros [i][1] = autor;
		
	}
	
	return 0;
}
