#include <iostream>
#include <fstream>
using namespace std;
char c;
int n, m;
string S;

int main()
{
    ifstream rf("cezar.in");
    ofstream wf("cezar.out");
    rf >> S;
    n = S.length();
    for (int i = 0; i < n; i++)
    {
        m = int(S[i]);
        if (m == 122)
            m = 97;
        else
            m++;
        S[i] = char(m);
    }
    wf << S;
    return 0;
}