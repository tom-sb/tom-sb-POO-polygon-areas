#include "punto.h"
#include <math.h>

Linea::Linea(Punto *A, Punto *B){
	this->line[0] = A;
	this->line[1] = B;
	this->distancia = dist2Points();
}
double Linea::dist2Points(Punto &A, Punto &B){
	double dist = sqrt(pow(A.getX() - B.getX(), 2) + pow(A.getY() - B.getY(), 2));
	return dist;
}
Punto Linea::getPuntoA(){
	return this->line[0];
}
Punto Linea::getPuntoB(){
	return this->line[0];
}
double Linea::getDistancia(){
	return this->distancia;
}
