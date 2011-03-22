// 
//  Haz una función Booleana que diga si un número
//  es par o impar.
//

#include <iostream>
using namespace std;

bool es_multiplo_de_4(int n) {
  return n % 4 == 0;
}

int main() {
  int k;
  cout << "Entero? ";
  cin >> k;
  if (es_multiplo_de_4(k)) {
    cout << "Es";
  } else {
    cout << "No es";
  }
  cout << " múltiplo de 4" << endl;
}
