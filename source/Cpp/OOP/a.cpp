#include <iostream>
using namespace std;

class Shape {
protected:
  int rong, dai, cao;

public:
  virtual int dienTich() {
    return 0;
  }

  void setRong(int _rong) {
    rong = _rong;
  }

  void setDai(int _dai) {
    dai = _dai;
  }

  void setCao(int _cao) {
    cao = _cao;
  }
};

class Rectangle: public Shape {
public:
  Rectangle(int d, int r) {
    dai = d;
    rong = r;
  };

  int dienTich() {
    return (dai * rong);
  }
};

int main() {
  system("cls");
  Rectangle rect = Rectangle(20, 10);
  rect.setRong(1);
  cout << rect.dienTich();
}