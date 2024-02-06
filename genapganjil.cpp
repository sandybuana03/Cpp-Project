// Penentuan bilangan genap atau ganjil

#include <iostream>

using namespace std;

int main(){
	cout << "Penentuan Bilangan Genap/Ganjil" << endl;
	cout << "===============================" << endl;
	
	int bilangan;
	string kategori;
	
	cout << "Masukkan Bilangan = ";
	cin >> bilangan;
	
	// Penentuan Bilangan Genap / Ganjil
	kategori = "Bilangan Ganjil";
	if (bilangan % 2 == 0)
		kategori = "Bilangan Genap";
		
	// Tampilkan Hasilnya
	cout << "Bilangan " << bilangan
		 << " Merupakan " << kategori << endl;
		 
	return(0);
}
