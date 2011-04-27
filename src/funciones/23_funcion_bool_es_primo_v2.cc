//
//  Hacer una función que determina si un número es primo
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

// Solo hay que comprobar divisores hasta la raíz del número
// http://...
bool es_primo(int n) {
  const int lim = raiz_entera(n);
  int d = 2;
  bool primo = true;
  while (d <= lim && primo) {
    if (n % d == 0) primo = false;
    else d++;
  }
  return primo;
}

int main() {
  int n;
  cout << "Número? ";
  cin >> n;
  cout << "Raíz entera: " << raiz_entera(n) << endl;
  for (int i = 1; i < 1000; i++) {
    cout << i << ' ' << raiz_entera(i) << endl;
  }
  if (es_primo(n)) {
    cout << "Es";
  } else {
    cout << "No es";
  }
  cout << " primo" << endl;
}
