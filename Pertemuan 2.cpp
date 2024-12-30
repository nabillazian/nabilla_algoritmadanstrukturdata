#include <iostream>
using namespace std;

int main()
{
	int penjumlahan1, penjumlahan2, penjumlahan3;
	cout << "Bilangan a = ";
	cin >> penjumlahan1;
	
	cout << "Bilangan b = ";
	cin >> penjumlahan2;
	
	penjumlahan3 = penjumlahan1 + penjumlahan2;
	
	cout << "Hasil Penjumlahan =" << penjumlahan3 <<endl <<endl; 
	
	int pengurangan1, pengurangan2, pengurangan3;
	cout << "Bilangan d = ";
	cin >> pengurangan1;
	
	cout << "Bilangan e = ";
	cin >> pengurangan2;
	
	pengurangan3 = pengurangan1 - pengurangan2;
	
	cout << "Hasil pengurangan ="<< pengurangan3 <<endl<<endl;
	
	int pembagian1, pembagian2, pembagian3;
	cout << "Bilangan f = ";
	cin >> pembagian1;
	
	cout << "Bilangan G = ";
	cin >> pembagian2;
	
	pembagian3 = pembagian1 / pembagian2;
	
	cout << "Hasil Pembagian = " <<pembagian3<<endl<<endl;
}

#include <iostream>
using namespace std;

int main ()
{
	char x[30], y[30], z[35];
	cout << "Masukan Nama Anda : "; 
	cin >>x;
	
	cout << "Masukan NPM Anda : "; 
	cin >>y;
	
	cout << "Masukan Alamat Anda : "; 
	cin >>z;
	
	cout << "Nama Anda Adalah : " <<x;
	cout << "\nNPM Anda Adalah : "<<y;
	cout <<"\nAlamat Anda Adalah : "<<z;
	
	return 0;
}
