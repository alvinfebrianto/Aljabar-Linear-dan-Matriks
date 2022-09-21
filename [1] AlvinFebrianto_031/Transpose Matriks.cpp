#include <iostream>
#include <conio.h>
using namespace std;

int main() {
  int b, k, i, j, m[10][10], transpose[10][10];
  
  cout << " Transpose Matriks\n\n";
  cout << " Jumlah baris: "; cin >> b;
  cout << " Jumlah kolom: "; cin >> k;

  cout << "\n Masukkan (" << b*k << " elemen) matriks: \n";
  for(i=0; i<b; i++) {
    for(j=0; j<k; j++) {
      cin >> m[i][j];
    }
  }
  
  for(i=0; i<b; i++) {
  	for(j=0; j<k; j++) {
  	  transpose[j][i] = m[i][j];
	}
  }
  
  cout << "\n-----------------------------";
  cout << "\n\n Hasil Transpose Matriks: \n";
  for(i=0; i<k; i++) {
    for(j=0; j<b; j++) {
      cout << " " << transpose[i][j] << "\t";
    }
    cout << endl;
  }
  
  getch();
}
