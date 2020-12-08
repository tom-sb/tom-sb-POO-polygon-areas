#ifndef POLIGONO_H
#define POLIGONO_H
#include <iostream>
#include <vector>
#include "linea.h"
#include "punto.h"
#include <math.h>

using namespace std;
class Poligono{
protected:
	int n;
	vector<Linea> aristas;
	vector<Punto> vertices;
public:
	Poligono(vector<Punto> puntos);
	int getN();
	vector<Linea> getAristas();
	vector<Punto> getVertices();
	double getPerimetro();
};

class Regular: public Poligono{
public:
	Regular(vector<Punto> puntos): Poligono(puntos){}
	double getArea();
};

#endif
