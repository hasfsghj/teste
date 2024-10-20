#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    char c;
    int u, v, x, y, z, mx, mn, m, n, c1;
    float x1;
    cout<<"introduceti un caracter: ";
    cin>>c;
    cout<<endl;
    switch (c) {
        case 'A'...'Z':
            cout<<"introduceti 5 cifre: ";
            cin>>u>>v>>x>>y>>z;
            cout<<endl;
            mx = max(max(max(max(u,v), x), y), z);
            if (u<v) mn=u; else mn=v;
            if (x<mn) mn=x;
            if (y<mn) mn=y;
            if (z<mn) mn=z;
            cout<<"cel mai mare nr: "<<mx<<", cel mai mic nr: "<<mn; break;
        case 'a'...'z':
            cout<<"introduceti un nr: ";
            cin>>m;
            cout<<endl;
            switch (m) {
                case -5:
                    cout<<"solutia este multimea R"; break;
                case -1 ... 5:
                    cout<<"nu exista solutie!"; break;
                default:
                    x1=(m-5)/((m-2)*(pow(m,2)-9));
                    cout<<"solutia este "<<x1; break;
            } break;
        case '0' ... '9': 
            c1=c-'0';
            if (c1%2==0) {
                cout<<"introduceti un nr: ";
                cin>>n;
        }
    }
    return 0;
}