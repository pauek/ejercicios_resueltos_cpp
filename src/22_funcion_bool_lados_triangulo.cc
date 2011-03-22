//
//  Haz una función Booleana que indique si tres números reales pueden
//  corresponder a los lados de un triángulo (el valor más grande 
//  es más pequeño que la suma de los otros dos).
//

#include <iostream>
using namespace std;

void ordena(double& a, double& b) {
  if (a < b) {
    double tmp = a;
    a = b;
    b = tmp;
  }
}

bool es_triangulo(double a, double b, double c) {
  ordena(a, b);
  ordena(a, c); // Ahora 'a' es el mayor
  return a < b + c;
}

int main() {
  double x, y, z;
  cout << "Lados de un triángulo? ";
  cin >> x >> y >> z;
  if (es_triangulo(x, y, z)) {
    cout << "Es";
  } else {
    cout << "No es";
  }
  cout << " un triángulo" << endl;
}
