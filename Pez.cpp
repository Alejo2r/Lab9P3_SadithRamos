#include "Pez.h"
Pez::Pez(int nivel) :
	Mascota(nombre, edad, hambre, vida) {
	this->nivelColor = nivel;
}

int Pez::getNivel() {
	return this->nivelColor;
}
void Pez::setNivel(int niv) {
	this->nivelColor = niv;
}