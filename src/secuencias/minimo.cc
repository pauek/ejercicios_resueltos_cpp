//
//  Determina el mínimo de una secuencia de enteros
//  almacenada en el fichero "seq_ent.txt"
//

#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream fich("seq_ent.txt");
  int i, min;
  fich >> i;
  min = i;
  while (!fich.eof()) {
	 if (i < min) min = i;
	 fich >> i;
  }
  cout << min << endl;
}
