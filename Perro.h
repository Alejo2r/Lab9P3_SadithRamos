#pragma once
#include "Mascota.h"
class Perro : public Mascota
{
private:
	int leal;
public:
	Perro(int leal);

	void setLeal(int);
	int getLeal();
};

