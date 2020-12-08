#include "poligono.h"

Poligono::Poligono(vector<Punto> puntos){
	n = puntos.size();
	vertices = puntos;
	for(int i=0;i<vertices.size();i++){
		if(i==n-1){
			Linea temp(&vertices[i],&vertices[0]);
			aristas.push_back(temp);
		}else{
			Linea temp(&vertices[i],&vertices[i+1]);
			aristas.push_back(temp);
		}
	}
	for(auto it: aristas){
		cout<<it.getDistancia()<<endl;
	}
}

int Poligono::getN(){
	return n;
}
vector<Linea> Poligono::getAristas(){
	return aristas;
}
vector<Punto> Poligono::getVertices(){
	return vertices;
}

double Poligono::getPerimetro(){
	double perimetro;
	for(auto it: aristas){
		perimetro += it.getDistancia();
	}
	return perimetro;
}

#define PI 3.14159265
double Regular::getArea(){
	double angulo = 360 /n;
	double apotema = aristas[0].getDistancia()/ 2*(tan((angulo/2)*PI/180));
	double area;
	area = (getPerimetro()*apotema)/2;
	return area;
}
