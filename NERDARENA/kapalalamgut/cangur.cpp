#include <iostream>
#include <fstream>
using namespace std;
int n;
long long metriPrev, metriTotal;

int main()
{
    ifstream rf("cangur.in");
    ofstream wf("cangur.out");
    rf >> n;
    metriPrev = 0;
    metriTotal = 0;

    for (int i = 0; i < n; i++)
    {
        long long  metriCurent = metriPrev * 10 + 7;
        metriTotal += metriCurent;

        metriPrev = metriCurent;
    }
    wf << metriTotal;
    return 0;
}