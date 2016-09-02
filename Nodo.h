/**
Nombre(s): Juan Manuel Vazquez Jimenez
Descripcion: La clase Nodo, con atributos y metodos que 
hacen posible el funcionamiento de la clase lista, ya que 
sin nodos no hay lista (a menos que este vacia).
*/

#include <iostream>

class Nodo
{
private:
	int Dato;
	Nodo *Sig;
public:
	//constructores
	Nodo(int Dato, Nodo *Sig);
	Nodo(int Dato);
	//seters y geters
	void setDato(int Dato);
	void setSig(Nodo *Sig);
	int getDato();
	Nodo* getSig();
};

