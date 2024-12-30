#include <iostream>
using namespace std;
int main ()
{
	int a,b,c=0 ; 
    cout  <<"Masukkan bilangan yang akan diperiksa = "; 
    cin  >>a; 
    if  (a == 0) 
    { 
        cout  <<" \n "<<a<<" bukan termasuk bilangan prima"; 
    } 
    else    { 
            for (b = 2 ; b < a ; b++) 
                if  (a % b ==  0) 
                    c++ ; 
    } 
    if  (c>=1) 
 	    cout  <<" \n "<<a<<" bukan termasuk bilangan prima."; 
    else 
        cout  <<" \n "<<a<<" termasuk bilangan prima."; 
    getchar();
}

