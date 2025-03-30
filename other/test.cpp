#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int m;
string S;
int main()
{
    cout << "S=";
    cin >> S;
    cout << S.find('.', 0) << endl;
    if (S.find('.', 0) > S.size())
        S = S + ".";

    cout << S;
}