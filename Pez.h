#pragma once
#include "Mascota.h"
class Pez : public Mascota
{
private:
	int nivelColor;

public:
	Pez(string nombre, int edad, int hambre, int vida,int nivelColor);

	int getNivel();
	void setNivel(int niv);
};

