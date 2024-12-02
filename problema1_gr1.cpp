#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cout << "c=";
    cin >> c;
    switch (c)
    {
    case '0' ... '9':
    {
        int n = 0, m = 0, o = 0, p = 0;
        cout << "n=";
        cin >> n;
        m = abs(n);
        if (n % 2 == 0)
            cout << "\nnr par";
        else
            cout << "\nnr impar";
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                cout << i << " ";
                o++;
                p += i;
            }
        }
        if (o == 2)
            cout << "\nnr prim";
        else
            cout << "\nnr compus";
        cout << "\nnr de divizori " << o << "\nsuma divizorilor " << p;
        break;
    }
    case 'A' ... 'Z':
    {
        double m1 = 0;
        int a = 0, b = 0;
        double c = 0, d = 0;
        string e = "";
        cout << "m=";
        cin >> m1;
        a = trunc(m1);
        c = m1 - a;
        if (a == 0)
            e = "0";
        else
        {
            while (a > 0)
            {
                b = a % 2;
                e = (char)(b + '0') + e;
                a = a / 2;
            }
        }
        e = e + ".";
        d = c;
        for (int f = 0; f < 6 && abs(d) > 0; f++)
        {
            d = d * 2;
            b = trunc(d);
            e = e + (char)(b + '0');
            d = d - b;
        }
        cout << "in baza 2 este " << e << endl;
        break;
    }
    default:
    {
        cout << "default";
        break;
    }
    }
    return 0;
}