#ifndef POLIGONO_H
#define POLIGONO_H
#include <iostream>
#include <vector>
#include "linea.h"
#include "punto.h"

using namespace std;
class Poligono{
protected:
	int n;
	vector<Linea> aristas;
	vector<Punto> vertices;
public:
	Poligono(vector<Punto> puntos);
	int getN();
	double getPerimetro();
};
#endif
