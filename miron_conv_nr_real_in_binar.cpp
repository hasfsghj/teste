#include <bits/stdc++.h>
#include <iostream>
using namespace std;

double x, x1;
int n, m;
string S;
int main()
{
    cout << "x=";
    cin >> x;

    // facem x sa fie pozitiv
    x = abs(x);
    x1 = x;

    // convertim partea intreaga in binar
    n = trunc(x);
    if (n == 0)
        S = "0";
    else
        S = "";

    while (n)
    {
        S = char(n % 2 + 48) + S;
        n /= 2;
    }
    // separam intregul de partea fractionara
    S += ".";

    // luam partea fractionara si o convertim
    x = x - trunc(x);
    for (int i = 1; i <= 16; i++)
    {
        x *= 2;
        n = trunc(x);
        S = S + char(n % 2 + 48);
        x = x - trunc(x);
    }

    // terminat convertirea

    /*
        stergem ultimul character daca e 0
        stringul se incepe de la 0, deci daca are 8 caractere, ultimul
        in teorie va fi nr 7. deci lungimea stringului (in cazul nostru
        acesta e 8), -1 (ca sa ajungem la ultiimul caracter: 7). noi
        daca acest ultim caracter e 0

    */

    while (S[S.size() - 1] == '0')
        // atat timp cat ultimul caracter e 0, noi vom sterge ultimul
        // caracter (therefore S.size() -1), doar o data (therefore
        // avem scris S.size( -1), 1) - ultimul nr indica cate caractere
        // scoatem din string
        S.erase((S.size() - 1), 1);

    // verificam daca ultimul element
    // este . (de asta e -1, see above de ce ultimul element e
    //-1) pai noi straight up scoatem ultimul element. care e .
    if (S[S.size() - 1] == '.')
        S.erase(S.size() - 1, 1);

    cout << x1 << "- in baza 2 este =" << S << '\n';
}