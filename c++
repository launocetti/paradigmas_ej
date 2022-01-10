/*clases_constructor para inicializar las variables de fecha*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

class Fecha{
	private: //atributos
	    int dia, mes, anio;
	public:  //metodos
	    Fecha(int,int,int); //constructor
	    void mostrarFecha();
		
};

//constructor uno que sirve para inicializar los parametros
Fecha::Fecha(int _dia, int _mes, int _anio){
	anio= _anio;
	mes= _mes;
	dia= _dia;
}

void Fecha::mostrarFecha(){
	cout<<"la fecha es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}

int main(){
	Fecha hoy(11,12,2020);
	
	hoy.mostrarFecha();
	
	system("pause");
	return 0;
}
