//
//  Haz una función que determina si un número es un cuadrado perfecto
//  (se puede expresar como el cuadrado de un número natural). 25 es
//  un cuadrado perfecto (5 por 5) y 100 también (10 por 10).
//  


#include <iostream>
using namespace std;

bool es_cuadrado_perfecto(int N) {
  int i = 1;
  while (i*i < N) i++;
  return i*i == N;
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
