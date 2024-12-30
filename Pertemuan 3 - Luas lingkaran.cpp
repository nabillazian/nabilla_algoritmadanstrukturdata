#include <iostream>
#include <conio.h>
#define phi 3.14286
using namespace std;

int main ()
{
	float r, t;
	
	cout << "Masukan jari jari lingkaran = ";
	cin >> r;
	
	t = phi * r * r;
	
	cout << "\nDiketahui luas lingkaran : ";
	
	cout << " \njari jari \t= "<<r<<endl;
	cout << "Pi \t\t= "<<phi<<endl;
	cout << "L \t\t= Pi x r x r";
	cout << "\nL \t\t= "<<phi;
	cout << " x " <<r;
	cout << " x "<<r<<endl;
	cout << "L \t\t= "<<t<<endl;
	cout << "Luas Lingkaran dengan jari jari "<<r;
	cout << " cm adalah = "<<t;
	cout << " cm";
	
	getch();
}
