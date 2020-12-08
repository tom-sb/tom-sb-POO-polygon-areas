#ifndef LINEA_H
#define LINEA_H
#include "punto.h"

class Linea{
private:
	Punto *line[2];
	double distancia;
public:
	Linea(Punto *A, Punto *B);
	Punto getPuntoA();
	Punto getPuntoB();
	double getDistancia();
};
#endif
