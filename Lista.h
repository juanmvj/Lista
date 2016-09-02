/**
Nombre(s): Juan Manuel Vazquez Jimenez
Descripcion: La clase lista, con atributos y metodos necesarios 
para esta estructura de datos funcione como debe de ser.
*/
#include "Nodo.h" 

class Lista
{
public:
	Nodo *H;
	Nodo *T;
	//constructores
	Lista();
	Lista(int Dato);
	//metodos
	bool ListaVacia();
	void AddInicio(int Dato);
	void AddFinal(int Dato);
	int RemoveInicio();
	int RemoveFinal();
	void VaciarLista();
	Nodo *BuscarElemento(int Dato);
	void AddRef(int Dato,int Ref);
	int RemoveRef(int Ref);
	void Show();
};