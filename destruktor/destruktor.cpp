#include <iostream>
#include <string>
using namespace std;

class angka {
private:
	int* arr;
	int panjang;
public:
	angka(int); // Constructor
	~angka(); // Destruktor
	void cetakData();
	void isiData();
};
// Definisi member Function
angka::angka(int i) { // Construktor
	panjang = i;
	arr = new int(i);
	isiData();
}

angka::~angka() { // Destruktor
	cout << endl;
	cetakData();
	delete[]arr;
	cout << "Alamat Array Sudah Dilepaskan" << endl;
}
