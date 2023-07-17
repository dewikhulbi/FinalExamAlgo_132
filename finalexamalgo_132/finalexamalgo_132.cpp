#include <iostream>
#include <string>
using namespace std;

struct Node {
	int NIM;
	string nama;
	Node* next;
};

Node* START = NULL;

const int MAX_MAHASISWA = 100;

int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];

int jumlahMahasiswa = 0;

class Queues {
	int FRONT, REAR, max = 100;
	int queue_array[100];
public:
	Queues() {
		FRONT = -1;
		REAR = -1;
	}

	void tambahMahasiswa() {
		if (jumlahMahasiswa < MAX_MAHASISWA) {
			cout << "========== TAMBAH MAHASISWA ==========" << endl;
			cout << "NIM : ";
			cin >> NIM[jumlahMahasiswa];
			cin.ignore();
			cout << "Nama : ";
			getline(cin, nama[jumlahMahasiswa]);
			cout << "Tahun Masuk: ";
			cin >> tahunMasuk[jumlahMahasiswa];
			cin.ignore();
			jumlahMahasiswa++;
			cout << "Mahasiswa berhasil ditambahkan!" << endl;
		}
		else {
			cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
		}
	};
	//isi
	void tampilkanSemuaMahasiswa() {
		int FRONT_position = FRONT;
		int REAR_position = REAR;

		if (FRONT == -1) {
			cout << "Queue is empty\n";
			return;
		}


	}
	void algorithmacariMahasiswaByNIM() {
		if (listEmpty()) {
			cout <<

		}

		void algorithmaSortByTahunMasuk();
	};
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
				tambahMahasiswa();
				cout << "Berhasil ditambahkan" << endl;
				break;
			case 2:
				//isi disini
				break;
			case 3:
				//isi disini
				break;
			case 4:
				//isi disini
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






		//2. queue dan single linkedlist
		//3. stack : tumpukan
		// queue : antrian
		//4. pada saat akan menyimpan data seperti tumpukan, seperti menumpuk koran pada sebuah dus
		//5. a. 5
			//b.preorder 