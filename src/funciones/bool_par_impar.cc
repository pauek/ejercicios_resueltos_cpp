// 
//  Haz una función Booleana que diga si un número
//  es par o impar.
//

#include <iostream>
using namespace std;

bool es_par(int n) {
  return n % 2 == 0;
}

int main() {
  int k;
  cout << "Entero? ";
  cin >> k;
  if (es_par(k)) {
    cout << "Par";
  } else {
    cout << "Impar";
  }
  cout << endl;
}
