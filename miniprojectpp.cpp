#include <iostream>
#include <string>

using namespace std;

const int MAX_KEGIATAN = 100;

string namaKegiatan[MAX_KEGIATAN];
string waktuKegiatan[MAX_KEGIATAN];
string kategoriKegiatan[MAX_KEGIATAN];
int statusKegiatan[MAX_KEGIATAN];
int jumlahKegiatan = 0;

void tampilkanMenu() {
    cout << "\n==========================================" << endl;
    cout << "           DAILY ACTIVITY PLANNER         " << endl;
    cout << "==========================================" << endl;
    cout << "1. Tambah Kegiatan" << endl;
    cout << "2. Lihat Daftar Kegiatan" << endl;
    cout << "3. Cek Jumlah Kegiatan" << endl;
    cout << "4. Update Status Kegiatan" << endl;
    cout << "5. Keluar" << endl;
    cout << "==========================================" << endl;
    cout << "Masukkan pilihan (1-5): ";
}

void tampilkanJudul(string judul) {
    cout << "\n==========================================" << endl;
    cout << "  " << judul << endl;
    cout << "==========================================" << endl;
}

int main() {
    tampilkanJudul("DAILY ACTIVITY PLANNER - C++");

    cout << "Selamat datang di Daily Activity Planner!" << endl;
    cout << "Kelola kegiatan harianmu dengan lebih teratur.\n";

    int pilihan;

    tampilkanMenu();
    cin >> pilihan;

    if (pilihan == 1) {
        cout << "\nMenu Tambah Kegiatan dipilih.";
    }
    else if (pilihan == 2) {
        cout << "\nMenu Daftar Kegiatan dipilih.";
    }
    else if (pilihan == 3) {
        cout << "\nMenu Cek Jumlah Kegiatan dipilih.";
    }
    else if (pilihan == 4) {
        cout << "\nMenu Update Status Kegiatan dipilih.";
    }
    else if (pilihan == 5) {
        cout << "\nProgram Daily Activity Planner ditutup.";
    }
    else {
        cout << "\nPilihan tidak tersedia. Silakan pilih menu 1-5.";
    }

    return 0;
}
