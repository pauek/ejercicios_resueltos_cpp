//
//  Determina el máximo de una secuencia de enteros
//  almacenada en el fichero "seq_ent.txt"
//

#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream fich("seq_ent.txt");
  int i, max;
  fich >> i;
  max = i;
  while (!fich.eof()) {
	 if (i > max) max = i;
	 fich >> i;
  }
  cout << max << endl;
}
