#include <iostream>
#include <conio.h>
using namespace std;
 
int main() {
	//deklarasi variabel
	int baris, kolom, skalar, matriks[20][20], hasil [20][20];

	cout << " Perkalian Skalar dan Matriks\n\n";
	//input baris, kolom, dan skalar
	cout << " Masukkan baris matriks: "; cin >> baris;
	cout << " Masukkan kolom matriks: "; cin >> kolom;
	cout << " Masukkan bilangan skalar: "; cin >> skalar;
	
	//looping untuk pembuatan matriks
	cout << "\n Matriks" << endl;
	for (int i = 0; i<baris; i++) {
		for (int j = 0; j<kolom; j++) {
 			cin >> matriks[i][j];
		}
	}
	cout << endl;
	
	//looping untuk hasil matriks
	cout << " Hasil Perkalian Skalar dan Matriks" << endl;
	for (int i=0; i<baris; i++)
	{
	 	for (int j=0; j<kolom; j++)
		{
		 	//Rumus perkalian matriks dengan skalar
	 		hasil[i][j]=skalar*matriks[i][j];
	 		//Menampilakan hasil matriks
	 		cout << " " << hasil[i][j] << "\t";
		}
		cout << endl;
	}
	
	getch();
}
