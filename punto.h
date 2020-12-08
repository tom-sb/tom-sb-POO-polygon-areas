#ifndef PUNTO_H
#define PUNTO_H

class Punto{
private:
	int x, y;
public:
	Punto(int _x, int _y);
	virtual int getX();
	virtual int getY();
	virtual void setX();
	virtual void setY();
};
#endif
