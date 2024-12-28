#include <iostream>
#include <fstream>
using namespace std;
int n;

int main()
{
    ifstream rf("balaur.in");
    ofstream wf("balaur.out");
    rf>>n;
    n*=5;
    wf<<n;
return 0;
}