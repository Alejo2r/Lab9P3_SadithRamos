#include "Gato.h"
Gato::Gato(string nombre, int edad, int hambre, int vida, int ind)
	:Mascota(nombre, edad,  hambre, vida) {
	this->ind = ind;
}

void Gato::setInd(int ind) {
	this->ind = ind;
}
int Gato::getInd() {
	return this->ind;
}
