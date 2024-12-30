#include <iostream>
using namespace std;

struct mhs {
    char nama[20], nim[10], matkul[15];
    int sks;
};

int main() {
    mhs bayar[2];
    int bts, var, tetap;

    for (int i = 0; i < 1; i++) {
        cout << "\n\n-----------------------------\n";
        cout << "\nNama mhs\t= ";
        cin >> bayar[i].nama;
        cout << "\nNIM\t\t= ";
        cin >> bayar[i].nim;
        cout << "\nMata Kuliah\t= ";
        cin >> bayar[i].matkul;
        cout << "\nJumlah SKS\t= ";
        cin >> bayar[i].sks;

        while (bayar[i].sks < 0) {
            cout << "Jumlah SKS tidak boleh negatif. Masukkan lagi: ";
            cin >> bayar[i].sks;
        }

        
        if (bayar[i].sks == 0) {
            tetap = 250000;
            var = 0;
        } else if (bayar[i].sks == 2) {
            tetap = 300000;
            var = bayar[i].sks * 300000;
        } else {
            tetap = 250000;
            var = bayar[i].sks * 250000;
        }

        cout << endl;
    }

    cout << "\n\n---------------------------\n";
    cout << "Output ";
    cout << "\n---------------------------\n";

    for (int i = 0; i < 1; i++) {
        cout << "\nNama mhs\t= " << bayar[i].nama;
        cout << "\nNIM\t\t= " << bayar[i].nim;
        cout << "\nMata kuliah\t= " << bayar[i].matkul;
        cout << "\nJumlah SKS\t= " << bayar[i].sks;
        cout << "\nSPP tetap\t= " << tetap;
        cout << "\nSPP variabel\t= " << var;
        cout << endl << endl;
    }

    return 0;
}
