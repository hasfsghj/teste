#include <iostream>
#include <fstream>
using namespace std;
int suma;

int n;
// declaram arrayulul, assume ca va fi max 100x100
int arrayul[100];

int main()
{
    ifstream fin("matrici.in");
    ofstream fout("matrici.out");

    // fout << "da marimea arrayulului: ";
    fin >> n;
    // fout << "\n";

    // citim arrayulul
    for (int i = 0; i < n; i++)
    {
        fin >> arrayul[i];
    }
    fout << "\n";

    // printam arrayulul
    for (int i = 0; i < n; i++)
    {
        fout << arrayul[i] << " ";
    }
    fout << "\n";

    // assignam valoarea din stanga la minim si maxim
    int minimul = arrayul[0];
    int maximul = arrayul[0];
    suma = 0;

    for (int i = 0; i < n; i++)
    {
        // // verificam valorile
        // if (minimul > arrayul[i])
        //     minimul = arrayul[i];

        // if (maximul < arrayul[i])
        //     maximul = arrayul[i];

        suma += arrayul[i];
    }

    // fout << "minimul: " << minimul << "\n";
    // fout << "maximul: " << maximul << "\n";
    fout << suma;
}
