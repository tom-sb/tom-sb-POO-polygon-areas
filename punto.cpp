#include <iostream>
#include "punto.cpp"

Punto::Punto(int _x, int _y){
	this->x = _x;
	this->y = _y;
}
int Punto::getX(){
	return x;
}

int Punto::getY(){
	return y;
}

void Punto::setX(int _x){
	this->x = _x;
}

void Punto::setY(int _y){
	this->y = _y;
}
