//judul


#include <iostream>
#include <conio.h>
using namespace std;
//kamus

	int terkecil,jml, angka,terbesar, bil1, bil2, bil3, bil4, bil5;

//deskripsi
int main() {

	cout<<"PROGRAM BILANGAN TERKECIL DAN TERBESAR"<<endl;
	cout<<"Masukan Bilangan ke-1 : ";
	cin>>bil1;
	cout<<"Masukan Bilangan ke-2 : ";
	cin>>bil2;
	cout<<"Masukan Bilangan ke-3 : ";
	cin>>bil3;
    cout<<"Masukan Bilangan ke-4 : ";
	cin>>bil4;
	cout<<"Masukan Bilangan ke-5 : ";
	cin>>bil5;
	//Menentukan nilai terkecil
	terkecil=bil1;

	if (bil2 < terkecil){
		terkecil=bil2;
	}
	if (bil3 < terkecil){
		terkecil=bil3;
	}
	if (bil4 < terkecil){
		terkecil=bil4;
	}
	if (bil5 < terkecil){
		terkecil=bil5;
	}


	//Menentukan nilai terbesar
	terbesar=bil1;

	if (bil2 > terbesar){
		terbesar=bil2;
	}
	if (bil3 > terbesar){
		terbesar=bil3;
	}
	if (bil4 > terbesar){
		terbesar=bil4;
	}
	if (bil5 > terbesar){
		terbesar=bil5;
	}

	cout<<"Nilai Terkecil adalah "<<terkecil<<endl;
	cout<<"Nilai Terbesar adalah "<<terbesar<<endl;

	 for(int c=1;c<jml;c++)
    {
        for(int d=0;d<jml-c;d++)
        {
            if(angka[d]<angka[d+1])
            {
                sorting=angka[d];
                angka[d]=angka[d+1];
                angka[d+1]=sorting;
            }
        }
    }



    cout << endl << "\t\tHasil dari pengurutannya Adalah";
    for(int i=0;i<jml;i++)
    {
        cout << " " << angka[i];
    }

	return 0;
}
