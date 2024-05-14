#include <iostream>
using namespace std;

class buku
{
	string judul;

public:
	buku setJudul(string judul)
	{
		this->judul = judul;
		return *this; // chain funtion
	}
	string getJudul()
	{
		return this->judul;
	}
} bukunya;

int main()
{
	// bukunya.setJudul("Matematika");
	// cout << bukunya.getjudul();
	cout << bukunya.setJudul("Matematika").getJudul(); // chain function callss
	return 0;
}

