#include <iostream>
#include <string>
using namespace std;

int main()

{
	int a, b, banyak, jumlah, pajak, total, totalkeseluruhan;
	const int z = 3;
	int potong[z];
	int harga[z] = {2500, 2000, 1500};
	char kode[z] = { 'D', 'P', 'S'} ;
	char jenis[z];
	string arti[z] = { "Dada", "Paha", "Sayap"} ;
	
	cout << "GROBAK FRIED CHICKEN" << endl;
	cout << "=====================";
	cout << "\nKode    Jenis    Harga" << endl;
	cout << "============================" << endl;
	
	for ( a = 0; a < z; a++){
		
		cout << kode[a] << "\t" << arti[a] << "\tRp. " << harga[a] << endl;	
}


	cout << "\n============================";
	
	cout << "\n\nBanyak jenis : ";
	cin >> banyak;
	
		for ( a = 0; a < banyak; a++)
		{
			cout << " \nJenis ke = " << a + 1 << endl;
			cout << "Jenis potong [D/P/S] : ";
			cin >> jenis[a];
			cout << "Banyak potong        : ";
			cin >> potong[a];
		}
	
		
	cout << "\n\n\t            GEROBAK FRIED CHICKEN "<< endl;
	cout << "==================================================================" << endl;
	cout << "No.     Jenis           Harga           Banyak          Jumlah" << endl;
	cout << "        Potong          Satuan          Beli            Harga" << endl;
	cout << "==================================================================" << endl;

	for ( a = 0; a < banyak; a++){
		for ( b = 0; b < z; b++){
			if ( kode[b] == jenis[a]){
			break;	
			}
		}
		cout << a + 1 << "\t"<< arti[b] << "\t\tRp " << harga[b] << "\t\t" << potong[a] << "\t\tRp "; 
		jumlah = harga[b] * potong[a];
		cout << jumlah << endl;
		total += jumlah;
	}
	pajak = total * 10/100;
	totalkeseluruhan = total + pajak;
	
	cout << "\n==================================================================" << endl;
	cout << "\t\t\t\t\tJumlah bayar    Rp " << total << endl;
	cout << "\t\t\t\t\tPajak 10%       Rp " << pajak << endl;
	cout << "\t\t\t\t\tTotal Bayar     Rp " << totalkeseluruhan << endl;
		
	return 0;
	
}
