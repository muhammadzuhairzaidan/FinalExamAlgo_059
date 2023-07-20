#include <iostream>
#include <string>
using namespace std;


const int MAX_MAHASISWA = 100 ;
int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;

void tambahMahasiswa() {
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama : ";
		getline(cin, nama[jumlahMahasiswa]);
		cout << "Jurusan : ";
		getline(cin, jurusan[jumlahMahasiswa]);
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();
		jumlahMahasiswa++;
		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
}
	else{
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
);
//isi disini
void tampilkanSemuaMahasiswa();
//isi disini
void algorithmacariMahasiswaByNIM();
//isi disini
void algorithmaSortByTahunMasuk();
int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			void tambahMahasiswa();
			break;
		case 2:
			void tampilkansemuaMahasiswa();
			break;
		case 3:
			void algoritmacariMahasiswaByNIM();
			break;
		case 4:
			void algoritmasortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;

// 2.Berdasarkan studi kasus diatas, algoritma apa saja yang anda gunakan? 
// algoritma pengurutan dan algoritma pencarian. 
//3.Jelaskan perbedaan mendasar antara algorithma stack dan queue!
//  algoritma menggunakan sistem last in dan first out sedangkan algoritma queue menggunakan sistem first in first out
//4. algoritma stack digunakan ketika kita akan menyimpan data atau elemen secara berurutan
	//5. a. lima
		//b. preorder benar 
