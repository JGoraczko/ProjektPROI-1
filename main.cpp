#include <iostream>
#include "Complex.h"
using namespace std;

int main(int argc, char** argv) {
Complex z;
z.re = 1;
z.im = 0;
Complex w;
w.re = 1.4;
w.im = 34;
z.Sum(w);
cout << z.re << " + " << z.im << "i";
}