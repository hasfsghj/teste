#include <iostream>
#include <fstream>
using namespace std;

int n;
// declaram arrayul, assume ca va fi max 100x100
int array_bidimensional[100][100];

int main()
{
    ifstream fin("matrici.in");
    ofstream fout("matrici.out");

    // fout << "da marimea arrayului: ";
    fin >> n;
    // fout << "\n";

    // citim arrayul
    // pentru fiecare rand
    for (int i = 0; i < n; i++)
    {
        // pentru fiecare coloana
        for (int j = 0; j < n; j++)
        {
            fin >> array_bidimensional[i][j];
        }
    }
    fout << "\n";

    // printam arrayul
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            fout << array_bidimensional[i][j] << " ";
        }
        fout << "\n";
    }
    fout << "\n";







    // assignam valoarea din stanga sus la minim si maxim pe diagonala principala
    int min_d_principala = array_bidimensional[0][0];
    int max_d_principala = array_bidimensional[0][0];

    // assignam valoarea din dreapta sus la minim si maxim pe diagonala secundara
    int min_d_secundara = array_bidimensional[0][n - 1];
    int max_d_secundara = array_bidimensional[0][n - 1];

    for (int i = 0; i < n; i++)
    {
        // verificam valorile pe diagonala principala
        if (min_d_principala > array_bidimensional[i][i])
            min_d_principala = array_bidimensional[i][i];
        if (max_d_principala < array_bidimensional[i][i])
            max_d_principala = array_bidimensional[i][i];

        // verificam valorile pe diagonala secundara
        if (min_d_secundara > array_bidimensional[i][n - i - 1])
            min_d_secundara = array_bidimensional[i][n - i - 1];
        if (max_d_secundara < array_bidimensional[i][n - i - 1])
            max_d_secundara = array_bidimensional[i][n - i - 1];
    }

    fout << "min_d_principala: " << min_d_principala << "\n";
    fout << "max_d_principala: " << max_d_principala << "\n";
    fout << "min_d_secundara: " << min_d_secundara << "\n";
    fout << "max_d_secundara: " << max_d_secundara << "\n";
}
