/*calcular la solucion a una ecuacion de segundo grado*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	 
	float a,b,c, x1, x2;
	
	cout<<"ingrese el valor de a: "; cin>>a;
	cout<<"ingrese el valor de b: "; cin>>b;
	cout<<"ingrese el valor de c: "; cin>>c;
	
	x1= (-b +sqrt(pow(b,2)- 4 * a *c))/(2*a);
	x2= (-b -sqrt(pow(b,2)- 4 * a *c))/(2*a);
	
	cout<<"\nLos valores que tiene x son: "<<x1<<" y "<<x2;
	
	return 0;
}
