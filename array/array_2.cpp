#include <iostream>
#include <conio.h>

using namespace std;

void mencariBilanganTertentu() {
    int x[10] = {45,34,23,34,32,12,65,76,34,23};
    int i, bill, jumlah = 0;
    bool ketemu = false;   

    cout << "Bilangan yang di cari : ";
    cin >> bill;

    for (i = 0; i < 10; i++)
    {
        if (x[i] == bill)
        {
            ketemu = true;
            cout << "Bilangan di temukan di elemen : " << i << endl;
            jumlah++;
        }
        
    }

    if (ketemu)
    {
        cout << "Jumlah data : " << jumlah;
    }
    else
    {
       cout << "Bilangan tidak di temukan !"; 
    }
}

main() {
    mencariBilanganTertentu();
    getch();
}