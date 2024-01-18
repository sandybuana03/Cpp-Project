// Penentuan Bilangan Terbesar
// Diantara 2 Bilangan

#include <iostream>

using namespace std;

int main(){
	cout << "Penentuan Bilangan Terbesar Diantara 2 Bilangan" << endl;
	cout << "===============================================" << endl;
	
	int bilanganX, bilanganY, terbesar;
	
	cout << "Bilangan Pertama  = ";
	cin >> bilanganX;
	
	cout << "Bilangan Kedua    = ";
	cin >> bilanganY;
	
	//Penentuan Bilangan Terbesar
	terbesar = bilanganX;
	if(bilanganY > terbesar)
		terbesar = bilanganY;
	
	// Tampilkan Hasilnya
	cout << "Bilangan Terbesar = " << terbesar << endl;
	
	return(0);
}
