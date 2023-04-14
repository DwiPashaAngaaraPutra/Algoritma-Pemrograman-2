#include <iostream>
#include <conio.h>

using namespace std;

struct mahasiswa
{
    char nim[15];
    char nama[30];
    char alamat[50];
    float ipk;
};

void dataDiri() {
    mahasiswa mhs;
    cout << "\n" << "\n";
    cout << "Nim        : ";
    cin.getline(mhs.nim, 15);
    cout << "Nama       : ";
    cin.getline(mhs.nama, 30);
    cout << "Alamat     : ";
    cin.getline(mhs.alamat, 50);
    cout << "IPK        : ";
    cin >> mhs.ipk;

    cout << "\n";

    cout << "Nim Anda         : " << mhs.nim << "\n";
    cout << "Nama Anda        : " << mhs.nama << "\n";
    cout << "Alamat Anda      : " << mhs.alamat << "\n";
    cout << "Nilai IPK Anda   : " << mhs.ipk << "\n";
}

int main() {
    dataDiri();
    getch();
}
