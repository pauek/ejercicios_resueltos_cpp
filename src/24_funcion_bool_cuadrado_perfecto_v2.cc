//
//  Haz una función que determina si un número es un cuadrado perfecto
//  (se puede expresar como el cuadrado de un número natural). 25 es
//  un cuadrado perfecto (5 por 5) y 100 también (10 por 10).
//  

#include <iostream>
using namespace std;

int abs(int k) {
  if (k < 0) k = -k;
  return k;
}

// Cálculo de la raíz entera
// http://...
int raiz_entera(int N) {
  int uk = -1, k = 1;
  while (abs(k - uk) > 1) {
    uk = k;
    k = (uk + N/uk) / 2;
  }
  while (k*k > N) k--;
  return k;
}

bool es_cuadrado_perfecto(int N) {
  int r = raiz_entera(N);
  return N == r*r;
}

int main() {
  int k;
  cout << "Numero? ";
  cin >> k;
  if (!es_cuadrado_perfecto(k)) {
    cout << "No es";  
  } else {
    cout << "Es";
  }
  cout << " un cuadrado perfecto" << endl;
}
