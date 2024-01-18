// Pengujian ekspresi relasional

#include <iostream>

using namespace std;

int main(){
	cout << "Pengujian Ekspresi Relasional" << endl;
	cout << "=============================" << endl;
	
	int a = 25, b = 23;
	
	cout << a << "  > " << b << " ? "
		 << (a > b) << endl;
	
	cout << a << " == " << b + 2 << " ? "
		 << (a == b + 2) << endl;
		 
	cout << a << " != " << b << " ? "
		 << (a != b) << endl;
		 
	cout << a << " <= " << b << " ? "
		 << (a <= b) << endl;
	
	return(0);
}
