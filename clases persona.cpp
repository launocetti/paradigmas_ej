//clases

#include<iostream>
#include<stdlib.h>

using namespace std;

class Persona{

/*atributos de la clase que no pueden modificarse y son el comun a todos*/
    
     private:  //atributos

        int edad;
        string nombre;

/*los metodos se ponen en publico para que todos puedan verlos*/

    public: //metodos

        Persona(int, string);  //constructor de la clase ue me va a traer los datos
        void leer();
        void correr();


};

/*inicializar el constructor indicando de que tipo es usando variables diferentes, sirve para inicializar los atributos de la clase*/

Persona::Persona(int _edad, string _nombre){

        edad = _edad;
        nombre = _nombre;

}

//ingresar metodos

void Persona::leer(){
    cout<<" soy "<< nombre<< " y estoy leyendo un libro " <<endl;

}

void Persona::correr(){

    cout<<" soy " << nombre<< " y estoy coriendo una maraton y tengo "<<edad<< " de edad "<< endl;

}


int main(){

//crear objeto

    Persona p1= Persona(20, "Alejandro");
    Persona p2(19,"Maria");
    Persona p3(21,"Juan");
    
    p1.leer();
    p2.correr();
    p3.leer();
    p3.correr();


    system("pause");
    return 0;
}
