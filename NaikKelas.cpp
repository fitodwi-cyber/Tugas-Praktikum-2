#include <iostream>
using namespace std;
int main()
{
	double nilai;

	cout << "=== Program Rekap Nilai Mahasiswa ==" << endl;
	cout << "Masukkan Nilai Mahasiswa: ";
	cin >> nilai;

	cout << "Nilai:" << nilai << endl;

	if (nilai > 89)
	{
		cout << "Nilai Mutu:A" << endl;
		cout << "Keterangan:NAIK KELAS" << endl;
	}
	else if (nilai <= 79 && nilai >= 71)
	{
		cout << "Nilai Mutu:B" << endl;
		cout << "Keterangan:NAIK KELAS" << endl;
	}
	else if (nilai <= 70 && nilai >= 61)
	{
		cout << "Nilai Mutu:C" << endl;
		cout << "Keterangan:NAIK KELAS" << endl;
	}
	else if (nilai <= 60 && nilai >= 51)
	{
		cout << "Nilai Mutu:D" << endl;
		cout << "Keterangan:TINGGAL KELAS" << endl;
	}
	else if (nilai <= 50)
	{
		cout << "Nilai Mutu:E" << endl;
		cout << "Keterangan:TINGGAL KELAS" << endl;
	}
	return 0;
}