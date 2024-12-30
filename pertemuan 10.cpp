#include <iostream>
#include <conio.h>
using namespace std;

int pangkat (int x , int y);

main()
{

	int x, y;

	cout << "MENGHITUNG PANKAT DENGAN FUNGSI REKURSIF "<<endl;
	cout << "\nMasukkan nilai x = ";
	cin >> x;
	cout<<"Masukkan nilai y = ";
	cin >> y;
	cout << endl;
	cout << x << " di pangkatkan " << y << " = " << pangkat ( x, y ) << endl;

	getch();

}

	int pangkat(int x, int y){
	if (y==1){
	return (x);
} 
	else
	{
	return ( x * pangkat ( x, y-1 ));

}
}
