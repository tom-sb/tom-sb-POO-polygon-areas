#include <iostream>
#include "poligono.h"
#include "punto.h"
#include "linea.h"
#include <tuple>
#include <vector>

using namespace std;

int main(){
	Punto pointA(0,0);
	Punto pointB(0,8);
	Punto pointC(8,8);
	Punto pointD(8,0);
	
	vector<Punto> puntos;
	puntos.push_back(pointA);
	puntos.push_back(pointB);
	puntos.push_back(pointC);
	puntos.push_back(pointD);

	for(auto it: puntos){
		cout<<it.getX()<<it.getY()<<endl;
	}

	Poligono cuadrado(puntos);		
	cout<<"cuadrado.getN()"<<endl;
	cout<<"numero de vertices: "<<cuadrado.getN()<<endl;
	cout<<"perimetro: "<<cuadrado.getPerimetro()<<endl;
	cout<<"dfdsfsdfdsfdsfdsf"<<endl;

	Regular cuadradoReg(puntos);
	cout<<"area -> "<<cuadradoReg.getArea()<<endl;

	vector<Punto> puntosTriangulo;
	puntosTriangulo.push_back(pointA);
	puntosTriangulo.push_back(pointB);
	puntosTriangulo.push_back(pointC);
	
	Triangulo trianguloeq(puntosTriangulo);
	cout<<"area triangulo  "<<trianguloeq.getArea()<<endl;

	Rectangulo rectangulo(puntos);
	cout<<"area rectangulo "<<rectangulo.getArea()<<endl;
	return 0;
}
