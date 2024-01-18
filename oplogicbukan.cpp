// Penggunaan Operator !

#include <iostream>

using namespace std;

int main(){
	cout << "Operator !" << endl;
	cout << "==========" << endl;
	
	bool keadaan = false;
	
	cout << "Nilai Keadaan Pada Awal = "
		 << keadaan << endl;
		 
	keadaan = !keadaan;
	cout << "Nilai Keadaan Melalui !Keadaan = "
		 << keadaan << endl;
	
	keadaan = !keadaan;
	cout << "Nilai Keadaan Melalui !Keadaan = "
		 << keadaan << endl;
	
	return(0);
}
