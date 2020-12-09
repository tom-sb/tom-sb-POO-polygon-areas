#ifndef PUNTO_H
#define PUNTO_H

class Punto{
private:
	double x, y;
public:
	Punto(double _x, double _y);
	virtual double getX();
	virtual double getY();
	virtual void setX(double _x);
	virtual void setY(double _y);
};
#endif
