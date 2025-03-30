#include <iostream>
#include <fstream>
using namespace std;
long long a;

int suma(long long n)
{   
    if (n==0)
        return 0;
    return n%10 + suma(n/10);
}

int main()
{
    ifstream rf("sumacfnr.in");
    ofstream wf("sumacfnr.out");
    rf >> a;
    wf << suma(a);
    return 0;
}