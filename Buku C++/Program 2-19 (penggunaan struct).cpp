#include <iostream>
using namespace std;

struct NIS 
{
	char nama[20];
	char umur[20];
    char kelas[20];
	char alamat[50];
};

NIS a;

int main()
{
	cout << "masukkan nama anda" << endl;
	cin.getline(a.nama,sizeof(a.nama)); 
	cout << "masukkan umur anda" << endl;
	cin.getline(a.umur,sizeof(a.umur));
	cout << "masukkan kelas anda" << endl;
	cin.getline(a.kelas,sizeof(a.kelas));
	cout << "masukkan alamat anda" << endl;
	cin.getline(a.alamat,sizeof(a.alamat));
	cout << "apakah informasi ini benar?" << endl;
	cout << a.nama << endl << a.umur << endl << a.kelas << endl << a.alamat << endl; 
}
