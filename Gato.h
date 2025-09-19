#pragma once
#include "Mascota.h"
using namespace std;
class Gato : public Mascota
{
private:
	int ind;

public:
	Gato(string nombre, int edad, int hambre, int vida,int ind);

	void setInd(int);
	int getInd();
};

