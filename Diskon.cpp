#include <iostream>
using namespace std;
int main() {

	double harga, diskon, hargaSetelahDiskon;

	cout << "masukkan:" << endl;
	cout << "hargabarang(Rp):";
	cin >> harga;

	cout << "Diskon barang(%): ";
	cin >> diskon;

	cout << "Jumlah diskon: " << harga * (diskon / 100);

	return 0;
}