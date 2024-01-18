// Pengujian Jenis Karakter

#include <iostream>

using namespace std;

int main(){
	cout << "Pengujian Jenis Karakter" << endl;
	cout << "========================" << endl;
	
	bool hurufKapital, hurufKecil, angka;
	char karakter;
	
	cout << "Masukan 1 Buah Karakter = ";
	cin >> karakter;
	
	hurufKapital = karakter >= 'A' && karakter <= 'Z';
	hurufKecil = karakter >= 'a' && karakter <= 'z';
	angka = karakter >= '0' && karakter <= '9';
	
	cout << "Huruf Kapital = " << hurufKapital << endl;
	cout << "Huruf Kecil   = " << hurufKecil << endl;
	cout << "Angka         = " << angka << endl;
	
	return(0);
}
