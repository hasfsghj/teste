#include <iostream>
#include <fstream>
using namespace std;
int n, f, r, k, m, f1, divizorul, sigma;
string inp1, inp2;
int faina[51];

int cmmdc(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int main()
{
    ifstream rf("cozonaci.in");
    ofstream wf("cozonaci.out");

    rf >> n;
    for (int i = 0; i < n; i++)
    {
        rf >> f >> r;
        faina[i] = f - r;
    }
    if (n == 1)
        wf << faina[0];
    else
    {
        divizorul = faina[0];
        sigma = faina[0];
        for (int i = 1; i < n; i++)
        {
            divizorul = cmmdc(divizorul, faina[i]);
            sigma += faina[i];
        }
    }
    wf << sigma << endl
       << divizorul;
    rf.close();
    wf.close();
}