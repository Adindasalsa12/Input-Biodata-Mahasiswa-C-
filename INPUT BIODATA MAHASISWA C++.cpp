#include <iostream>
#include <string>

using namespace std;

int main() {
    // Variabel untuk menyimpan data mahasiswa
    string nama, nim, jurusan, alamat;
    int usia;

    // Input biodata mahasiswa
    cout << "=== Input Biodata Mahasiswa ===" << endl;

    cout << "Masukkan Nama: ";
    getline(cin, nama);

    cout << "Masukkan NIM: ";
    getline(cin, nim);

    cout << "Masukkan Jurusan: ";
    getline(cin, jurusan);

    cout << "Masukkan Usia: ";
    cin >> usia;
    cin.ignore(); // Membersihkan buffer setelah input angka

    cout << "Masukkan Alamat: ";
    getline(cin, alamat);

    // Menampilkan biodata mahasiswa
    cout << "\n=== Biodata Mahasiswa ===" << endl;
    cout << "Nama     : " << nama << endl;
    cout << "NIM      : " << nim << endl;
    cout << "Jurusan  : " << jurusan << endl;
    cout << "Usia     : " << usia << " tahun" << endl;
    cout << "Alamat   : " << alamat << endl;

    return 0;
}

