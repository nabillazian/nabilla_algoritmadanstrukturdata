#include <iostream>
#include <conio.h>
#define phi 3.14286
using namespace std;

int main ()
{
	int r, t, l;
	
	cout << "Masukan jari jari tabung = ";
	cin >>r;
	
	cout << "Masukan tinggi tabung \t = ";
	cin >>t;
	
	l = phi * r * r * t;
	cout <<"\nDiketahui Volume tabung adalah :";
	
	cout << "\njari jari \t\t= "<<r;
	cout << "\ntinggi \t\t\t= "<<t;
	cout << "\nPi \t\t\t= " <<phi;
	cout << "\nV \t\t\t= Pi * r * r * t";
	cout << "\nV \t\t\t= "<<phi; 
	cout << " x " <<r;
	cout << " x "<<r;
	cout << " x "<<t;
	cout << "\nV \t\t\t= "<<l;
	cout << " cm";
	cout << "\nVolume tabung dengan jari jari "<<r;
	cout << " cm";
	cout << " dan tinggi "<<t;
	cout << " cm adalah "<<l;
	cout << " cm";
	
	getch();
}
