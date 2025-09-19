#pragma once
#include "Mascota.h"
class Perro : public Mascota
{
private:
	int leal;
public:
	Perro(string nombre, int edad, int hambre, int vida, int leal);

	void setLeal(int);
	int getLeal();
};

