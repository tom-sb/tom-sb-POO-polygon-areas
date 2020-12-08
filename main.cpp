#include <iostream>
#include "punto.h"
#include "linea.h"

using namespace std;

int main(){
	Punto pointA(4,2);
	cout<<pointA.getX()<<endl;
	cout<<pointA.getY()<<endl;
	Punto pointB(4,8);
	cout<<pointB.getX()<<endl;
	cout<<pointB.getY()<<endl;
	cout<<"dskjnfsdkj\n";
	Linea myline(&pointA, &pointB);
	cout<<myline.getPuntoA().getX()<<endl;
	cout<<myline.getPuntoA().getY()<<endl;
	cout<<myline.getPuntoB().getX()<<endl;
	cout<<myline.getPuntoB().getY()<<endl;
	cout<<myline.getDistancia()<<endl;

	return 0;
}
