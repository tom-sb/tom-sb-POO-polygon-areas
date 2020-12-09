#include <iostream>
#include "poligono.h"
#include "punto.h"
#include "linea.h"
#include <tuple>
#include <vector>

using namespace std;

int main(){

	Punto pointA(2,0);
	Punto pointB(4,0);
	Punto pointC(5.247,1.5636);
	Punto pointD(4.802,3.5135);
	Punto pointE(3,4.3813);
	Punto pointF(1.1981,3.5135);
	Punto pointG(0.753,1.5637);

	vector<Punto> hepta;
	hepta.push_back(pointA);
	hepta.push_back(pointB);
	hepta.push_back(pointC);
	hepta.push_back(pointD);
	hepta.push_back(pointE);
	hepta.push_back(pointF);
	hepta.push_back(pointG);

	Regular heptagono(hepta);
	cout<<"Perimetro heptagono : "<<heptagono.getPerimetro()<<endl;
	cout<<"Area heptagono : "<<heptagono.getArea()<<endl;
/*
	for(auto it: puntos){
		cout<<it.getX()<<it.getY()<<endl;
	}
*/
	return 0;
}
