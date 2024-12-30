#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	
	int b = a--;
	
	cout << "Post-decrement : " <<endl;
	cout << "NIlai a setelah a-- : "<<a<<endl;
	cout << "Nilai b : "<<b<<endl;
	
	int c = 5;
	
	int d = --c;
	
	cout << "\nPre-decrement : "<<endl;
	cout << "NIlai c setelah --c : "<< c <<endl;
	cout << "Nilai d setelah --c : "<< d <<endl;
	
	return 0;
}
