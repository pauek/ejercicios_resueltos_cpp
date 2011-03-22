//
//  Escribir por pantalla todos los números de 3 cifras tales
//  que las centenas y las decenas sean igual que las unidades
//

#include <iostream>
using namespace std;

int main() {
  int i;
  for (i = 100; i < 1000; i++) {
    int c = i / 100;
    int d = (i / 10) % 10;
    int u = i % 10;
    if (c + d == u) {
      cout << i << ' ';
    }
  }
  cout << endl;
}
