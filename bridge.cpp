#include <iostream>

using namespace std;
class Color{
 public:
  virtual string OperationColor() const = 0;
};

class ColorRojo : public Color{
 public:
  string OperationColor() const override{
    return "ColorRojo\n";
  }
};
class ColorAzul : public Color{
 public:
  string OperationColor() const override{
    return "ColorAzul\n";
  }
};

class FigGeometrica{
 protected:
  Color* implementColor_;

 public:
  FigGeometrica(Color* implementColor) : implementColor_(implementColor){
  }

  virtual string Operation() const{
    return "FigGeometrica\n" + this->implementColor_->OperationColor();
  }
};

class Triangulo : public FigGeometrica{
 public:
  Triangulo(Color* implementColor) : FigGeometrica(implementColor){
  }
  string Operation() const override{
    return "Triangulo\n" + this->implementColor_->OperationColor();
  }
};

class Rectangulo : public FigGeometrica{
 public:
  Rectangulo(Color* implementColor) : FigGeometrica(implementColor){
  }
  string Operation() const override{
    return "Rectangulo\n" + this->implementColor_->OperationColor();
  }
};

void ClientCode(const FigGeometrica& abstractFig){
  cout<<abstractFig.Operation();
}

int main(){
  Color* implementColor = new ColorRojo;
  FigGeometrica* abstractFig = new FigGeometrica(implementColor);
  ClientCode(*abstractFig);
  cout<<endl;

  implementColor = new ColorAzul;
  abstractFig = new Triangulo(implementColor);
  ClientCode(*abstractFig);

  return 0;
}
