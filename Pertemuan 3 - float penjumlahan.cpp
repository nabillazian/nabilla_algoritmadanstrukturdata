#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	cout << "A. Penjumlahan Bilangan Desimal";
	
	float a,b,c;
	cout << "\nBilangan Pertama = ";
	cin >>a;
	
	cout << "Bilangan Kedua = ";
	cin >>b;
	
	c = a+b;
	
	cout << "Hasil Penjumlahan = "<<c<<endl;
	
	cout << "\nB. Pengurangan Bilangan Desimal";
	
	float d,e,f;
	cout << "\nBilangan Pertama = ";
	cin >>d;
	
	cout << "Bilangan Kedua = ";
	cin >>e;
	
	f = d-e;
	
	cout << "Hasil Pengurangan = "<<f<<endl;
	
	cout << "\nC. Perkalian Bilangan Desimal";
	
	float g,h,i;
	cout << "\nBilangan Pertama = ";
	cin >>g;
	
	cout << "Bilangan Kedua = ";
	cin >>h;
	
	i = g*h;
	
	cout <<"Hasil Perkalian = "<<i<<endl;
	
	getch();
	
	
}
