#include <iostream>
#define phi 3.14
using namespace std;

float luaspsg(int a);
float luaspjg(int a, int b);
float luastbg (int a, int b);
float volumetbg (int a, int b);

int main()
{
	int a, i, z;
	float sisi, lebar,panjang, jarijari, tinggi, jarijari2, tinggi2;
	cout << "Apa yang ingin kamu hitung ? " << endl;
	cout << "\nKetik '1' Jika kamu ingin mencari luas Persegi" << endl;
	cout << "Ketik '2' Jika kamu ingin mencari luas Persegi Panjang" <<endl;
	cout << "Ketik '3' Jika kamu ingin mencari luas Tabung" << endl;
	cout << "Ketik '4' jika kamu ingin mencari volume tabung " << endl;
	cout << "========================================================" << endl;
		

	for ( z = 0; z < 4; z++){
	cout << "\nMasukkan Kode : ";
	cin >> a;
	cout << "------------------" << endl << endl;
	
	for ( i = 0; i < 2; i++){
	
	if ( a == 1){
		cout << "\nLUAS PERSEGI" << endl;
		cout << "------------";
		cout << "\nMasukkan sisi : ";
		cin >> sisi;
		
		luaspsg(sisi);
	}
	
	else if ( a == 2) {
		cout << "\nLUAS PERSEGI PANJANG"<< endl;
		cout << "--------------------";
		cout << "\nMasukkan panjang   : ";
		cin >> panjang;
		cout << "Masukkan Lebar     : ";
		cin >> lebar;
		
		luaspjg(panjang, lebar);
	}
	if ( a == 3){
		cout << "\nLUAS TABUNG" << endl;
		cout << "-----------";
		cout << "\nMasukkan Jari jari   : ";
		cin >> jarijari;
		cout << "Masukkan tinggi      : ";
		cin >> tinggi;
		
		luastbg(jarijari, tinggi);
	}
	else if ( a == 4) {
		cout << "\nVOLUME TABUNG" << endl;
		cout << "-------------" << endl;
		cout << "\nMasukkan Jari Jari   : ";
		cin >> jarijari2;
		cout << "Masukkan tinggi      : ";
		cin >> tinggi2;
		
		volumetbg(jarijari2, tinggi2);
	}
	}
}
	return 0;
}
	


float luaspsg(int a){
	float hasil = a*a;
	
	cout << "\nDiketahui Luas persegi adalah :" << endl;
	cout << "Sisi = ";
	cout << a << " cm "<< endl;
	cout << "L    = ";
	cout << "S x S"<< endl;
	cout << "L    = ";
	cout << a << " cm x " << a << " cm " << endl;
	cout << "L    = ";
	cout << hasil << " cm "<< endl;
	cout << "Luas persegi dengan sisi " << a << " cm adalah " << hasil << " cm" << endl;	
}

float luaspjg(int a, int b){
	float hasil = a * b;
	
	cout << "\nDiketahui Luas Persegi Panjang adalah : " << endl;
	cout << "Panjang = ";
	cout << a << " cm " << endl;
	cout << "lebar   = " << b << " cm " << endl;
	cout << "L       = " << "P x L" << endl;
	cout << "L       = Panjang x Lebar " << endl;
	cout << "L       = " << a << " cm x " << b << " cm " << endl;
	cout << "L       = " << hasil << " cm " <<endl;
	cout << "Luas persegi panjang dengan panjang " << a << " cm dan lebar " << b << " cm adalah " << hasil << " cm " << endl;
}

float luastbg(int a, int b){
	float hasil = 2 * phi * a * ( a + b);
	
	cout << "\nDiketahui Luas Tabung adalah : " << endl;
	cout << "Jari Jari  = ";
	cout << a << " cm " << endl;
	cout << "Tinggi     = ";
	cout << b << " cm " << endl;
	cout << "L          = 2 x phi x r x r + t " << endl;
	cout << "L          = 2 x Phi x Jari Jari x Jari jari + Tinggi" << endl;
	cout << "L          = 2 x " << phi <<" cm x " << a << " cm x " << a << " cm + "<< b << " cm "<< endl;
	cout << "L          = " << hasil << " cm "<< endl;
	cout << "Luas tabung dengan jari jari " << a << " cm dan tinggi " << b << " cm adalah " << hasil << " cm "<< endl;
}

float volumetbg (int a, int b){
	float hasil = phi * (a * a) * b;

	cout << "\nDiketahui Volume Tabung adalah : " << endl;
	cout << "Jari Jari  = ";
	cout << a << " cm " << endl;
	cout << "Tinggi     = ";
	cout << b << " cm " << endl;
	cout << "L          = Phi x r x r x t " << endl;
	cout << "L          = Phi x Jari jari x jari jari x tinggi " << endl;
	cout << "L          = " << phi << " cm x " << a << " cm x " << a << " cm "<< " x " << b << " cm " << endl;
	cout << "L          = " << hasil << " cm " << endl;
	cout << "Volume tabung dengan jari jari " << a << " cm dan tinggi "	<< b << " cm adalah " << hasil << " cm " << endl;
	
}
