#include <iostream>
#include "Complex.h"
#include "Rectangle.h"
using namespace std;

int main(int argc, char** argv) {
Complex z;
z.re = 1;
z.im = 0;
Complex w;
w.re = 1.4;
w.im = 34;
cout << z.re << " + " << z.im << "i + ";
cout << w.re << " + " << w.im << "i = ";
z.Sum(w);
cout << z.re << " + " << z.im << "i" << endl;
Rectangle r;
r.height = 10;
r.width = 5;
double p = r.Area();
cout << "Pole prostokata o bokach " << r.height << " i " << r.width << " to: " << p;
}