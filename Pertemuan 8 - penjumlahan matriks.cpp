 #include <iostream>
using namespace std;

int main()
{
	int baris, kolom, matriksA[100][100], matriksB[100][100], penjumlahan[100][100], pengurangan[100][100], perkalian[100][100], a, b;
	
	cout << "Masukan Jumlah Baris ( between 1 and 100) : ";
	cin >> baris;
	
	cout << "Masukan Jumlah kolom (between 1 and 100)  : ";
	cin >> kolom;
	
	cout << "\nMasukan matriks pertama : " << endl;
	
	for ( a = 0; a < baris; a++)
		for ( b = 0; b < kolom; b++)
	{
		cout << "Matriks a" << a + 1 << b + 1 << " : ";
		
		cin >> matriksA[a][b];
	}
	cout << "\nMasukan matriks kedua : " << endl;
	
	for ( a = 0; a < baris; a++)
		for ( b = 0; b < kolom; b++)
		{
			cout << "Matriks b" << a + 1 << b + 1 << " : ";
			cin >> matriksB[a][b];
			}
	
	for ( a = 0; a < baris; a++)
		for ( b = 0; b < kolom; b++) {
		
		penjumlahan[a][b] = matriksA[a][b] + matriksB[a][b];
		pengurangan[a][b] = matriksA[a][b] - matriksB[a][b];
		perkalian[a][b] = matriksA[a][b] * matriksB[a][b];
	}
		
		cout << "\nPenjumlahan kedua matriks :"<<endl;
		for ( a = 0; a < baris; a++)
			for( b = 0; b < kolom; b++)
			{
				cout << penjumlahan[a][b] << " ";
				if ( b == kolom - 1)
				cout << endl;
				}
				
		cout << "\nPengurangan kedua matriks :"<<endl;
		for ( a = 0; a < baris; a++)
			for ( b = 0; b < kolom; b++)
			{
				cout << pengurangan[a][b] << " ";
				if ( b == kolom - 1)
				cout << endl;
			}
			
		cout << "\nPerkalian kedua matriks :"<< endl;
		for ( a = 0; a < baris; a++)
			for ( b = 0; b < kolom; b++)
			{
				cout << perkalian[a][b] << " ";
				if ( b == kolom - 1)
				cout << endl;
			}
				
	return 0;	
	
}
