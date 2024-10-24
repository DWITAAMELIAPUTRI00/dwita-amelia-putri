#include <iostream>
#include <string>

using namespace std;

int main() {
    string namaMahasiswa, npm, kodeJurusan, jurusan;
    int pembayaranAwal, jumlahCicilan, besarCicilan, pembayaranKe;
    char pilihan;

    do {
        cout << "Masukkan Nama Mahasiswa: ";
        getline(cin, namaMahasiswa);
        cout << "Masukkan NPM: ";
        getline(cin, npm);
        cout << "Masukkan Kode Jurusan (SI/TI/KA/MI): ";
        cin >> kodeJurusan;
        
        if (kodeJurusan == "SI") {
            jurusan = "Sistem Informasi";
            pembayaranAwal = 2100000;
            jumlahCicilan = 7;
            besarCicilan = 300000;
        } else if (kodeJurusan == "TI") {
            jurusan = "Teknik Informatika";
            pembayaranAwal = 2500000;
            jumlahCicilan = 7;
            besarCicilan = 300000;
        } else if (kodeJurusan == "KA") {
            jurusan = "Komputer Akuntansi";
            pembayaranAwal = 1750000;
            jumlahCicilan = 6;
            besarCicilan = 200000;
        } else if (kodeJurusan == "MI") {
            jurusan = "Manajemen Informatika";
            pembayaranAwal = 1500000;
            jumlahCicilan = 6;
            besarCicilan = 250000;
        } else {
            cout << "Kode Jurusan tidak valid.\n";
            continue;
        }

        cout << "Masukkan pembayaran ke (1-" << jumlahCicilan << "): ";
        cin >> pembayaranKe;
    
        if (pembayaranKe < 1 || pembayaranKe > jumlahCicilan) {
            cout << "Pembayaran ke tidak valid.\n";
            continue;
        }

        int uangKuliah = pembayaranAwal + (jumlahCicilan * besarCicilan);
        int uangKuliahTerbayar = pembayaranAwal + (pembayaranKe * besarCicilan);
        int sisaUangKuliah = uangKuliah - uangKuliahTerbayar;

        cout << "\n--------------------------------------\n";
        cout << "\n------------ Detail Pembayaran Uang Kuliah ------------\n";
        cout << "\n--------------------------------------\n";
        cout << "Nama Mahasiswa  : " << namaMahasiswa << endl;
        cout << "NPM             : " << npm << endl;
        cout << "Jurusan         : " << jurusan << endl;
        cout << "Pembayaran Awal : Rp " << pembayaranAwal << endl;
        cout << "Jumlah Cicilan  : " << jumlahCicilan << endl;
        cout << "Besar Cicilan   : Rp " << besarCicilan << endl;
        cout << "Pembayaran Ke   : " << pembayaranKe << endl;
        cout << "Uang Kuliah     : Rp " << uangKuliah << endl;
        cout << "Uang Kuliah Terbayar: Rp " << uangKuliahTerbayar << endl;
        cout << "Sisa Uang Kuliah: Rp " << sisaUangKuliah << endl;
        
        cout << "==========================================\n";

    
        cout << "\nMasih ingin menghitung [Y/T]: ";
        cin >> pilihan;
        cin.ignore(); 

    } while (pilihan == 'Y' || pilihan == 'y');
    
    return 0;
}