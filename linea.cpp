#include <iostream>
#include "punto.h"
#include "linea.h"
#include <math.h>
using namespace std;
Linea::Linea(Punto *A, Punto *B){
	this->line[0] = A;
	this->line[1] = B;
	this->distancia = dist2Points();
}

double Linea::dist2Points(){
	double dist = sqrt(pow(this->line[0]->getX() - this->line[1]->getX(), 2) + pow(this->line[0]->getY() - this->line[1]->getY(), 2));
	return dist;
}

Punto Linea::getPuntoA(){
	return *this->line[0];
}

Punto Linea::getPuntoB(){
	return *this->line[1];
}

double Linea::getDistancia(){
	return this->distancia;
}
