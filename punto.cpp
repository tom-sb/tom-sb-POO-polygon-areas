#include <iostream>
#include "punto.h"

Punto::Punto(double _x, double _y){
	this->x = _x;
	this->y = _y;
}
double Punto::getX(){
	return x;
}

double Punto::getY(){
	return y;
}

void Punto::setX(double _x){
	this->x = _x;
}

void Punto::setY(double _y){
	this->y = _y;
}
