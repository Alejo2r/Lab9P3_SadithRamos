#include "Pez.h"
Pez::Pez(string nombre, int edad, int hambre, int vida, int nivelColor) :
	Mascota(nombre, edad, hambre, vida) {
	this->nivelColor = nivelColor;
}

int Pez::getNivel() {
	return this->nivelColor;
}
void Pez::setNivel(int niv) {
	this->nivelColor = niv;
}