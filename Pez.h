#pragma once
#include "Mascota.h"
class Pez : public Mascota
{
private:
	int nivelColor;

public:
	Pez(int nivelColor);

	int getNivel();
	void setNivel(int niv);
};

