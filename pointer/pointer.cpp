#include <iostream>

using namespace std;

void addres() 
{
    int x;
    int *px;

    x = 2;
    px = &x;

    cout << "\n";

    cout << "Nilai X             : " << x << endl;
    cout << "Nilai *PX           : " << x << endl;
    cout << "Nilai PX (Alamat X) : " << px << endl;
}

int main()
{
    addres();
    return 0;
}