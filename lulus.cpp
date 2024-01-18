// Penentuan Lulus / Tidak

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
	int nilai;
	
	cout << "Penentuan Lulus / Tidak" << endl;
	cout << "=======================" << endl;
	cout << "Masukkan Nilai = ";
	cin >> nilai;
	
	bool lulus = nilai >= 75;
	string hasil = lulus ? "Lulus" : "Tidak Lulus";
	cout << "Hasil          = " << hasil << endl;
	
	return(0);
}
