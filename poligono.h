#ifndef POLIGONO_H
#define POLIGONO_H
#include "linea.h"
#include "punto.h"

class Poligono{
protected:
	int n;
	Linea *aristas[n];
	Punto *vertices[n];
public:
	Poligono();

};
#endif
