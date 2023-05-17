#include <iostream>
#include <string>
#include "mbrstatic func_041.h"
using namespace std;

class mahasiswa {
private:
	static int nim;
public:
	int id;
	string nama;

	void setID();
	void printALL();

	static void setNim(int pNim) { nim = pNim; /*Definisi function*/}
	static void getNim() { return ; /*Definisi function*/; }

	mahasiswa(string pnama):nama(pnama) {setID();}
};

int mahasiswa::nim = 0;

void mahasiswa::setID() {
	id = ++nim;
}

void mahasiswa::printALL() {
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main() {
	mahasiswa mhs1("sri dadi");
	mahasiswa mhs2("budi jatmiko");
	mahasiswa::setNim(9); //mengakses nim melalui stastic member function "setNim"
	mahasiswa mhs3("andi janu");
	mahasiswa mhs4("joko wahono");

	mhs1.printALL();
	mhs2.printALL();
	mhs3.printALL();
	mhs4.printALL();

	cout << "akses dari luar object = " << mahasiswa::getNim() << endl; //mengakses nim melalui stastic member function "setNim"

	return 0;
}