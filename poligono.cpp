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

double Poligono::getPerimetro(){
	double perimetro;
	for(auto it: aristas){
		perimetro += it.getDistancia();
	}
	return perimetro;
}
