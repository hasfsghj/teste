#include <iostream>
#include <fstream>
using namespace std;
int n;
long long metriPrev, metriTotal;

int fib(int j)
{
    if (j == 0)
        return 1;
    if (j == 1)
        return 1;
        
    return fib(j - 1) + fib(j - 2);
}

int main()
{
    ifstream rf("fib.in");
    ofstream wf("fib.out");
    rf >> n;

    wf << fib(n);
    return 0;
}