#include <iostream>
#define phi 3.14286
using namespace std;

int main()
{
	string bentuk;
	string persegi;
	string lingkaran
	int a,b,c;
	
	cout <<"Masukan bangun ruang yang ingin di hitung =";
	cin >>bentuk;
	
	if (bentuk=="lingkaran"){
		cout <<"Masukan jari jari lingkaran =";
		cin >>a>>endl;
		
		b = phi*a*a;
		
		cout <<"luas lingkaran adalah ="<<b<<endl;
	}
	
}
