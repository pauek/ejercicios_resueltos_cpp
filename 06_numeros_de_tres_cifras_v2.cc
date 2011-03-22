//
//  Escribir por pantalla todos los números de 3 cifras tales
//  que las centenas y las decenas sean igual que las unidades
//

#include <iostream>
using namespace std;

int main() {
  int u, d, c;
  for (u = 0; u < 10; u++) {
    for (c = 0; c <= u; c++) {
      if (u - c > 0) {
	cout << (u - c) << c << u << ' ';
      }
    }
  }
  cout << endl;
}
