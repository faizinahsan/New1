/*
Nama : Mochamad Fa'izin Ahsan
NPM : 140810160032 

*/
#include <iostream>
using namespace std;

struct mahasiswa
{
	char nama[10];
	char npm[10];
	int nilai;

};
typedef mahasiswa larikMhs[10];

void banyakMahasiswa(int &n){
	cout<"Banyak Mahasiswa: " ; cin>>n;
}

void inputMahasiswa(larikMhs &Mhs, int n){
	for(int i = 0; i<n; i++){
		cout<<"Masukan data mahasiswa ke-"<<(i+1)<<endl;
		cout<<"Nama : "; Mhs[i].nama;
		cout<<"NPM : "; Mhs[i].npm;
		cout<<"Nilai : "; Mhs[i].nilai;
	}
}

void cetakMahasiswa(larikMhs Mhs, int n){
	for(int i = 0; i<n; i++){
		cout<<Mhs[i].npm<<Mhs[i].nama<<Mhs[i].nilai<<endl;
	}
}

int main(){
	larikMhs Mhs;
	int n;
	banyakMahasiswa(n);
	inputMahasiswa(Mhs, n);
	cetakMahasiswa(Mhs, n);
}