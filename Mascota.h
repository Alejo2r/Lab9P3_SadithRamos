#pragma once
#include <iostream>
using namespace std;
class Mascota
{
protected:
	string nombre;
	int edad;
	int hambre;
	int vida;

public:
	Mascota(string nombre, int edad, int hambre, int vida);
	virtual ~Mascota();

	virtual void alimentar();
	virtual void pasear();
	virtual void mostrarEstado();

	void setEdad(int);
	void setHambre(int);
	void setVida(int);

	string getNombre();
	int getEdad();
	int getHambre();
	int getVida();
};

