//rellenar una matriz manualmente y mostrarla por pantalla

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100][100], filas, columnas;
	
	cout<<"ingresar numeros de filas: "; cin>>filas;
	cout<<"ingresar numero de columnas: "; cin>>columnas;
	
	//almacenar valores en la matriz
	
	for(int i=0; i<filas;i++){
		for(int j =0; j<columnas;j++){
			cout<<"ingrese valores ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	
	//mostrar matriz
	
	for(int i=0;i<filas;i++){
		for(int j=0; j<columnas;j++){
			cout<<numeros[i][j];
		}
		
		cout<<"\n";
	}
	
	getch();
	return 0;
}
