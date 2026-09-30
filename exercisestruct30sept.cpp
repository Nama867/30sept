#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float persentaseabsen;
};

void inputData(Mahasiswa *mhs, int n) {
    for (int i = 0; i < n; i++) {
        cin >> (mhs + i)->nama;
        cin >> (mhs + i)->nim;
        cin >> (mhs + i)->persentaseabsen;
    }
}

void tampilkanData(Mahasiswa *mhs, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nama       : " << (mhs + i)->nama << endl;
        cout << "NIM        : " << (mhs + i)->nim << endl;
        cout << "Persentase : " << (mhs + i)->persentaseabsen << "%" << endl;
    }
}

int main() {
    int n;
    cout << "Masukkan Jumlah Mahasiswa : ";
    cin >> n;

    Mahasiswa mhs[40];
    
    Mahasiswa *ptr = mhs;
    inputData(ptr, n);
    tampilkanData(ptr, n);

    return 0;
}
