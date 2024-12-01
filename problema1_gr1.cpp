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
        for (int i = 1; i <= n; i++){
            if (n % i == 0) {
                cout<<i<<" ";
                o++;
                p+=i;
            }
        }
        if (o==2) 
            cout<<"\nnr prim";
        else
            cout<<"\nnr compus";
        cout<<"\nnr de divizori "<<o<<"\nsuma divizorilor "<<p;
        break;
    }
    }
    return 0;
}