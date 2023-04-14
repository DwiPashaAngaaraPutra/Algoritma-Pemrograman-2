#include <iostream>
#include <conio.h>

using namespace std;

class mahasiswa 
{
    char nim[15];
    char nama[30];
    char alamat[50];

    public:
        void hitungNilaiAkhir(float tugas, float kuis, float mid, float uas, float &NA);
        void hitungNilaiHuruf(float NA, const char* &NH);
};

void mahasiswa::hitungNilaiAkhir(float tugas, float kuis, float mid, float uas, float &NA) 
{
    NA = 0.1 * tugas + 0.2 * kuis + 0.3 * mid + 0.4 * uas;
}

void mahasiswa::hitungNilaiHuruf(float NA, const char* &NH)
{
    if (NA > 85)
    {
        NH = "A";
    } else if(NA <= 85 && NA > 70) {
        NH = "B";
    } else if(NA <= 70 && NA > 55) {
        NH = "C";
    } else if(NA <= 55 && NA > 40) {
        NH = "D";
    } else {
        NH = "E";
    }
}

int main() {
    mahasiswa mhs;
    float NA;
    const char *NH;

    cout << "\n";
    mhs.hitungNilaiAkhir(30, 50, 56, 54, NA);
    cout << "Total Nilai Akhir : " << NA << endl;
    mhs.hitungNilaiHuruf(NA, NH);

    cout << "\n";
    cout << "Nilai Huruf : " << NH << endl;

    getch();
}