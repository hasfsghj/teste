#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int suma_cifrelor(int n)
{
    int suma = 0, m;
    while (n)
    { // calculam suma cifrelor
        m = n % 10;
        n /= 10;
        suma = suma + m;
    }

    return suma;
}

int minimul(int u, int v, int x, int y, int z, int mn)
{
    if (u < v)
            mn = u;
        else
            mn = v;
        if (x < mn)
            mn = x;
        if (y < mn)
            mn = y;
        if (z < mn)
            mn = z;

    return mn;
}

int cmmdc(unsigned a, unsigned b)
{
    while (a != b)
            {
                if (a > b)
                {
                    a -= b;
                }
                else
                {
                    b -= a;
                }
            }
    return a;
}

int main()
{
    char c;
    int u, v = 0, x, y = 0, z, mx, mn, m = 0, n, c1, suma;
    long long w = 1;
    unsigned a, b;
    float x1;
    cout << "introduceti un caracter: ";
    cin >> c;
    cout << endl;
    switch (c)
    {
    case 'A' ... 'Z':
        cout << "introduceti 5 cifre: ";
        cin >> u >> v >> x >> y >> z;
        cout << endl;
        mx = max(max(max(max(u, v), x), y), z);
        mn = minimul(u,v,x,y,z,mn);
        cout << "cel mai mare nr: " << mx << ", cel mai mic nr: " << mn;
        break;
    case 'a' ... 'z':
        cout << "introduceti un nr: ";
        cin >> m;
        cout << endl;
        switch (m)
        {
        case -5:
            cout << "solutia este multimea R";
            break;
        case -1 ... 5:
            cout << "nu exista solutie!";
            break;
        default:
            x1 = (m - 5) / ((m - 2) * (pow(m, 2) - 9));
            cout << "solutia este " << x1;
            break;
        }
        break;
    case '0' ... '9':
        c1 = c - '0';
        if (c1 % 2 == 0)
        {
            cout << "introduceti un nr: ";
            cin >> n;
            cout << endl;
            suma = 0;
            u = n;
            x = u;
            z = x;
            suma = suma_cifrelor(n);

            while (u)
            { // calculam nr de cifre
                u /= 10;
                v++;
            }
            while (x)
            { // calculam rasturnatul
                y = x % 10 + y * 10;
                x /= 10;
            }
            for (m = 1; m <= z; ++m)
            { // calculam factorial
                w *= m;
            }
            // v-=2;
            cout << "suma cifrelor este " << suma << ";\nin nr aveti atatea cifre: " << v << "; \nrasturnatul nrului: " << y << "; \nnrul dvs factorial este " << w;
        }
        else
        {
            cout << "introduceti 2 nr ";
            cin >> a >> b;
            cout << endl;
            u = a % b;
            v = a / b;
            cout << "a%b=" << u << ", a/b=" << v << ", cel mai mare divizor comun: " << cmmdc(a,b);
        }
        break;
    default:
        int nr_div=0, suma_div=0;
        cout << "introduceti un nr ";
        cin >> u;
        cout << endl;
        cout << "divizorii: ";
        for (v = 1; v <= u; ++v)
        {
            if (u % v == 0) {
                cout << v << endl;
                nr_div++; //nr de divizori
                suma_div+=v; //suma divizorilor
            }
        }
        cout << "nr de divizori: " << nr_div << "\nsuma divizorilor: " << suma_div;
    }
    return 0;
}