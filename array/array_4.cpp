#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <algorithm>
#include <windows.h>
#include <iomanip>
#include <stdlib.h>

#define Nmaks 10
typedef int matrik[Nmaks] [Nmaks];

using namespace std;

void gotoxy(short int x, short int y)
{
  static HANDLE h = NULL;  
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };  
  SetConsoleCursorPosition(h,c);
}

void matrix() {
    int n, i, j;
    matrik A,B,C;

    cout << "Program Penjumlahan Matrik A 2x2 dan B 2x2 \n";
    cout << "\n";
    n = 2;

    cout << "Masukan Entri Entri Pada Matriks A \n";
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("A[%d %d] = ", i, j);
            cin >> A[i] [j];
        }
    }
    system("cls");

    cout << "Masukan Entri Entri Pada Matriks B \n";
    cout << "\n";
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("B[%d %d] = ", i, j);
            cin >> B[i] [j];
        }
    }
    system("cls");

    cout << "\n";
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            C[i] [j] = (A[i] [1] * B[1] [j]) + (A[i] [2] * B[2] [j]);
        }
        
    }
    system("cls");

    cout << "\n";
    cout << "Entri Entri Matriks A, B Dan C \n";
    // proses output matriks A
    gotoxy(1,5);
    cout << "A = ";
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            gotoxy(2+4*j, 2+2*i);
            cout << A[i] [j];
        }
    }
    // proses output matriks B
    gotoxy(1,10);
    cout << "B = ";
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            gotoxy(2+4*j, 2+2*i+5);
            cout << B[i] [j];
        }
    }
    // proses output matriks C
    gotoxy(1,15);
    cout << "C = ";
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            gotoxy(2+4*j, 2+2*i+10);
            cout << A[i] [j];
        }
    }

    gotoxy(12,15);
    cout << " x ";
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            gotoxy(13+4*j, 2+2*i+10);
            cout << B[i] [j];
        }
    }

    gotoxy(23,15);
    cout << " = ";
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            gotoxy(24+4*j, 2+2*i+10);
            cout << C[i] [j];
        }
    }

    cout << "\n";
}

main() {
    matrix();
    getch();
}