 #include "Nodo.h"

/**
Constructor de un nodo con un dato y el apuntador al siguiente nodo
@params Dato, *Sig
*/
Nodo::Nodo(int Dato, Nodo *Sig)
{
	this->Dato = Dato;
	this->Sig = Sig;
}
/**
Constructor de un nodo con un dato y el siguiente apuntando a NULL
@params Dato
*/
Nodo::Nodo(int Dato)
{
	this->Dato = Dato;
	this->Sig = NULL;
}
/**
asignamos un dato a un nodo
@params Dato
@result void
*/
void Nodo::setDato(int Dato)
{
	this->Dato = Dato;
}
/**
asignamos el elemento al que va a apuntar el nodo
@params *sig
@result void
*/
void Nodo::setSig(Nodo *Sig)
{
	this->Sig = Sig;
}
/**
obtenemos el dato del nodo
@params ---
@result int 
*/
int Nodo::getDato()
{
	return this->Dato;
}
/**
obtenemos el elemento siguiente del nodo
@params ---
@result Nodo
*/
Nodo *Nodo::getSig()
{
	return this->Sig;
}
