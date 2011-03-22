//
//  Hacer una función que determina si un número es primo
// 

#include <iostream>
using namespace std;

bool es_primo(int n) {
  int d = 2;
  bool primo = true;
  while (d < n/2 && primo) {
    if (n % d == 0) primo = false;
    else d++;
  }
  return primo;
}

int main() {
  int n;
  cout << "Número? ";
  cin >> n;
  if (es_primo(n)) {
    cout << "Es";
  } else {
    cout << "No es";
  }
  cout << " primo" << endl;
}
