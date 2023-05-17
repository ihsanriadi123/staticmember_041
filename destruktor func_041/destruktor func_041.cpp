#include <iostream>
using namespace std;

class angka {
private:
	int* arr;
	int panjang;
public:
	angka(int); //constructor
	~angka(); //destructor
	void cetakdata();
	void isidata();
};
//definisi member function
angka::angka(int i) { //constructor
	panjang = i;
	arr = new int[i];
	isidata();
}

angka::angka() { //destructor
	cout << endl;
	cetakdata();
	delete[]arr;
	cout << "alamat array sudah dilepaskan" << endl;
}

void angka::cetakdata() {
	for (int i = 1; i <= panjang; i++) {
		cout << i << " = " << arr[i] << endl;
	}
}

void angka::isidata() {
	for (int i = 1; i <= panjang; i++) {
		cout << i << " = "; cin >> arr[i];
	}
	cout << endl;
}

int main() {
	angka belajarcpp(3); //construktor dipanggil
	angka* ptrbelajarcpp = new angka(5); // construktor dipanggil
	delete ptrbelajarcpp; //destructor dipanggil

	return 0;
}//destructor dipanggil