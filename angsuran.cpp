// Perhitungan Angsuran Pinjaman Hutang

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double pinjaman, bungaPertahun;
	int tempoDalambulan;
	
	cout << "Perhitungan Angsuran Pinjaman Hutang" << endl;
	cout << "====================================" << endl;
	
	cout << "Besar Pinjaman            = ";
	cin >> pinjaman;
	
	cout << "Bunga Per Tahun (%)       = ";
	cin >> bungaPertahun;
	
	cout << "Tempo Bulan               = ";
	cin >> tempoDalambulan;
	
	// Perhitungan Angsuran
	double angsuran = pinjaman * (1.0 / tempoDalambulan + bungaPertahun / 1200);
	
	// Tampilkan Hasilnya
	cout << "Jumlah Angsuran Per Bulan = Rp." << angsuran << endl;
	
	
	return(0);
}
