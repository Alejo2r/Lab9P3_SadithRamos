#include "Gato.h"
Gato::Gato(int ind)
	:Mascota(nombre, edad,  hambre, vida) {
	this->ind = ind;
}

void Gato::setInd(int ind) {
	this->ind = ind;
}
int Gato::getInd() {
	return this->ind;
}
