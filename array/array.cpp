#include <iostream>
#include <conio.h>

using namespace std;

void mencariBilanganTerkecil() {
    int x[10] = {45,34,23,34,32,12,65,76,34,23};
    int i;
    int maks = -1000;
    int min = 1000;

    for (i = 0; i < 10; i++)
    {
        if (x[i] > maks) {
            maks = x[i];
        } else if(x[i] < min) {
            min = x[i];
        }
    }

    cout << "\n" << "\n";

    cout << "Nilai maksimum : " << maks << endl;
    cout << "Nilai minimum  : " << min << endl;
}

main() {
    mencariBilanganTerkecil();
    getch();
}