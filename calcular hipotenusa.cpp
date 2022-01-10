/*escribir un programa que calcule la hipotenusa de un triangulo, 
obteniendo la medida de los catetos por teclado*/
#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	float cateto1, cateto2, hipotenusa;
	
	cout<<"ingrese el valor del primer cateto del triangulo: "; cin>>cateto1;
	cout<<"ingrese el valor del segundo cateto del triangulo: "; cin>>cateto2;
	
	hipotenusa= sqrt(pow(cateto1,2)+pow(cateto2,2));
	
	cout<<"\nEl valor de la hipotenusa es: "<<hipotenusa;
	
	
	return 0;
	
}
