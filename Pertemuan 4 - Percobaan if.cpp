#include <iostream>
#define phi 3.14286
using namespace std;

int main()
{
	char bangun[28];
	int a,b,c,d,e;
	
	cout << "Menhitung luas lingkaran dan tabung";
	
	cout <<"\nMasukan Jari Jari =";
	cin >>a;
	
	cout <<"Masukan Tinggi =";
	cin >>b;
	
	cout <<"Bangun apa yang mau kamu hitung ?";
	cin >>bangun;
	
	c = phi*a*a;
	d = phi*a*a*b;
	
	if (bangun=0){
		cout <<"Luas Lingkaran adalah ="<<c<<endl;
	}
	if (bangun=1);{
		cout <<"Volume tabung adalah ="<<d<<endl;
	}
}
