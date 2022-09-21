#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	//deklarasi variabel
	int matriks1[10][10], matriks2[10][10], hasil[10][10], i, j, k, m, n, p, q, jumlah = 0;
    
    cout << " Perkalian Matriks\n\n";
    
	//Input baris matriks pertama 
	cout << " Masukkan jumlah baris matriks pertama: "; cin >> m;
    //Input kolom matriks pertama
	cout << " Masukkan jumlah kolom matriks pertama: "; cin >> n;
    //Input baris matriks kedua
	cout << " Masukkan jumlah baris matriks kedua: "; cin >> p;
    //Input kolom matriks kedua
	cout << " Masukkan jumlah kolom matriks kedua: "; cin >> q;
    
	if(n != p) {
        cout << "Matriks tidak dapat dikalikan satu sama lain\n";
    } else {
        //Input matriks pertama
		cout << "\n Masukkan elemen matriks pertama: \n";
        for(i = 0; i < m; i++) {
            for(j = 0; j < n; j++) {
                cin >> matriks1[i][j];
      }
    }
    //Input matriks kedua
	cout << "\n Masukkan elemen matriks kedua: \n";
    for(i = 0; i < p; i++) {
      for(j = 0; j < q; j++) {
        cin >> matriks2[i][j];
      }
    }
    for(i = 0; i < m; i++) {
      for(j = 0; j < q; j++) {
        for(k = 0; k < p; k++) {
          jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
        }
        hasil[i][j] = jumlah;
        jumlah = 0;
      }
    }
    //Menampilkan hasil perkalian matriks
	cout << "\n Hasil Perkalian Matriks: \n";
    for(i = 0; i < m; i++) {
      for(j = 0; j < n; j++) {
        cout << " " << hasil[i][j] << "\t";
      }
      cout << endl;
    }
  }
  
  getch();
}
