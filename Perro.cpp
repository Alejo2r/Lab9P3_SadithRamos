#include "Perro.h"
Perro::Perro(string nombre, int edad, int hambre, int vida, int leal) :
	Mascota(nombre, edad, hambre, vida) {
	this->leal = leal;
}

int Perro::getLeal() {
	return this->leal;
}

void Perro::setLeal(int leal) {
	this->leal = leal;
}