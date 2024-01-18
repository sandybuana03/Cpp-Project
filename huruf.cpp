// Penentuan Huruf / Bukan

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
	char kar;
	
	cout << "Penentuan Huruf / Bukan" << endl;
	cout << "=======================" << endl;
	cout << "Masukkan 1 Buah Karakter = ";
	kar = cin.get();
	
	bool huruf = ((kar >= 'A' && kar <= 'Z') ||
				  (kar >= 'a' && kar <= 'z'));
	string keterangan = huruf ? "Huruf" : "Bukan Huruf";
	cout << kar << " Adalah " << keterangan << endl;
	
	return(0);
}
