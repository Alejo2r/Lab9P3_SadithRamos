#include "Mascota.h"
Mascota::Mascota(string nombre, int edad, int hambre, int vida) {
	this->nombre = nombre;
	this->edad = edad;
	this->hambre = hambre;
	this->vida = vida;
}
Mascota::~Mascota() {};

void Mascota::alimentar() {
	if(this->hambre >=0)
		setHambre(getHambre() - ((rand() % 10) + 5));
	else
	{
		cout << "La Mascota no tiene hambre!" << endl;
	}

	if (this->hambre < 0)
		this->hambre = 0;

	if (this->vida <= 100) {
		setVida(this->vida + ((rand() % 5) + 5));
	}
	else
	{
		cout << "La Mascota tiene vida maxima!" << endl;
	}
	if (this->vida > 100)
		this->vida = 100;
}
void Mascota::pasear() {
	if (this->vida > 0) {
		setVida(this->vida - ((rand() % 10) + 5));
	}
	else
	{
		cout << "La Mascota no tiene vida!" << endl;
	}
	if (this->hambre < 100) {
		setHambre(this->hambre + ((rand() % 10) + 10));
	}
	if (this->vida <= 0)
		this->vida = 1;
	if (this->hambre >= 100)
		this->hambre = 100;
}
void Mascota::mostrarEstado() {
	if (this->vida >= 30) {
		cout << "Estado Optimo" << endl;
	}
	else if (this->vida < 30) {
		cout << "Muy mal" << endl;
	}
}


void Mascota::setEdad(int edad) {
	this->edad = edad;
}
void Mascota::setHambre(int hambre) {
	this->hambre = hambre;
}
void Mascota::setVida(int vida) {
	this->vida = vida;
}

string Mascota::getNombre() {
	return this->nombre;
}

int Mascota::getEdad() {
	return this->edad;
}
int Mascota::getHambre() {
	return this->hambre;
}
int Mascota::getVida() {
	return this->vida;
}