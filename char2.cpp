// Pengujian Jenis Karakter Versi 2

#include <iostream>

using namespace std;

int main(){
	cout << "Pengujian Jenis Karakter Versi 2" << endl;
	cout << "================================" << endl;
	
	bool hurufKapital, hurufKecil, angka;
	char karakter;
	
	cout << "Masukan 1 Buah Karakter = ";
	cin >> karakter;
	
	hurufKapital = isupper(karakter);
	hurufKecil = islower(karakter);
	angka = isdigit(karakter);
	
	cout << "Huruf Kapital = " << hurufKapital << endl;
	cout << "Huruf Kecil   = " << hurufKecil << endl;
	cout << "Angka         = " << angka << endl;
	
	return(0);
}
