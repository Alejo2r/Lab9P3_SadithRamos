#include "Perro.h"
Perro::Perro(int leal) :
	Mascota(nombre, edad, hambre, vida) {
	this->leal = leal;
}

int Perro::getLeal() {
	return this->leal;
}

void Perro::setLeal(int leal) {
	this->leal = leal;
}