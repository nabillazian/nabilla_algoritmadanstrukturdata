#include <iostream>
using namespace std;

void ganjil_genap (int *bilangan){
	if (*bilangan % 2 == 0){
	cout << " 200, 201 ";
		} else { 
			cout << " 201 ";
}
}

int main()
{
	int bilangan;
	cout << " Masukkan Bilangan " ;
	cin >> bilangan;

	ganjil_genap(&bilangan);
}
