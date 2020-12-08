#include <iostream>
#include "punto.h"
#include "linea.h"

using namespace std;

int main(){
	Punto point(2,2);
	cout<<point.getX()<<endl;
	cout<<point.getY()<<endl;
	point.setY(4);
	point.setX(4);
	cout<<point.getX()<<endl;
	cout<<point.getY()<<endl;
	return 0;
}
