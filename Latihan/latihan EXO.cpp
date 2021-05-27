#include <iostream>
using namespace std;

int main ()
{
	int ans;
	cout << "Selamat datang di program menebak member EXO" << endl;
	cout << "Pikirkan 1 member EXO dan jawablah apakah dengan angka 1 untuk benar dan 0" << endl;
	cout << "salah" << endl;
	cout << "pada setiap pertanyaan di bawah ini" << endl;
	cout << "apakah anda siap? masukkan 1 atau 0 dan enter untuk mulai" << endl;
	cin >> ans;
	if (ans=1)
	{
		cout << "apakah member anda lahir di tahun 1992?" << endl;
		cin >> ans; 
		if (ans == 1)
		{
			cout << "apakah member anda main vocal di EXO?" << endl;
			cin >> ans;
			if (ans==1)
			{
				cout << "Member anda adalah Chen!"<<endl;
			}
			else
			cout << "apakah member anda rapper di EXO? "<<endl;
			cin >> ans;
			if (ans==1)
			{
				cout << "Member anda adalah Chanyeol!"<<endl;
			}
			else
			cout << "Member anda adalah Baekhyun!"<<endl;
		}
		else
		cout << "apakah member anda lahir di tahun 1994?"<<endl;
		cin >> ans;
		if (ans==1)
		{
			cout << "apakah member anda mempunyai kulit eksotik? (menurut Nicole)"<<endl;
			cin >> ans;
			if (ans==1)
			{
			cout <<	"Member anda adalah Kai!"<<endl;
			} 
			else
			cout << "member anda adalah Sehun!"<<endl;
		}
		else
		cout << "apakah member anda lahir di tahun 1991?"<<endl;
		cin >> ans;
		if (ans==1)
		{
			cout << "Apakah member anda berasal dari China?"<<endl;
			cin >> ans;
			if (ans==1)
			{
				cout << "Member anda adalah Lay!"<<endl;
			}
			else
			cout << "Member anda adalah Suho!"<<endl;
		}
		else
		cout << "apakah member anda lahir di tahun 1990?"<<endl;
		cin >> ans;
		if (ans==1)
		{
			cout << "Member anda adalah Xiumin!"<<endl;
		}
		else cout << "Member anda adalah DO!"<<endl;
	}
	else 
	while (ans=0)
	{
		cout << "masukkan angka 1 untuk memulai"<<endl;
		cin >> ans;
	}
	return 0;
}


/*
Baekhyun 92 mulut kotak
sehun 94 putih
kai 94 eksotik
chanyeol 92 telinga panjang
xiumin 90
suho 91 jidat lebar
lay 91 ada lesung pipi
chen 92 mata kayak unta
DO 93
*/
