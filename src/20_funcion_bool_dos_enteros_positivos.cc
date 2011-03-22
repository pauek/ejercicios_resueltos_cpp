//
//  Haz una función Booleana que diga si dos
//  enteros son positivos
//

#include <iostream>
using namespace std;

bool positivos(int a, int b) {
  return a > 0 && b > 0;
}

int main() {
  int n, m;
  cout << "Enteros? ";
  cin >> n >> m;
  if (positivos(n, m)) {
    cout << "Los dos son positivos" << endl;
  } else {
    cout << "Alguno no es positivo" << endl;
  }
}
