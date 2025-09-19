#pragma once
#include "Mascota.h"
using namespace std;
class Gato : public Mascota
{
private:
	int ind;

public:
	Gato(int ind);

	void setInd(int);
	int getInd();
};

