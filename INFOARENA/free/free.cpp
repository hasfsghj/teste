#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
long long n, m;

int main()
{
    ifstream rf("free.in");
    ofstream wf("free.out");
    rf >> n;
    // for (int i = 1; i * i <= n; i++)
    // {
    //     m++;
    // }
    n -= floor(sqrt(n));
    wf << n;
    return 0;
}