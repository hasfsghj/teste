#include <iostream>
#include <fstream>
using namespace std;
long long n, d, i;

int main()
{
    ifstream rf("next.in");
    ofstream wf("next.out");
    rf >> n;
    rf >> d;
    for (i = n; i % d != 0; i++)
    {
    }
    wf << i;
    return 0;
}