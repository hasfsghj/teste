#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    char c;
    int w, u, v, x, y, z, mx, mn, m, n, c1, suma;
    unsigned a, b;
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
                cout<<endl;
                suma=0;
                u=n;
                x=u;
                z=x;
                while (n) {
                    m=n%10;
                    n/=10;
                    suma=suma+m;
                }
                while (u) {
                    u/=10;
                    v++;
                }
                while (x) {
                    y=x%10+y*10;
                    x/=10;
                }
                for (m=1;m<=z;++m) {
                    w*=m;
                }
                v-=2;
                cout<<"suma cifrelor este "<<suma<<"; in nr aveti atatea cifre: "<<v<<"; rasturnatul nrului: (NU MERGE)"<<y<<"; nrul dvs factorial este (NU MERGE)"<<w;
            }
            else {
                cout<<"introduceti 2 nr";
                cin>>a>>b;
                cout<<endl;
                u=a%b;
                v=a/b;
                while(a!=b) {
                    if(a>b) {
                        a-=b;
                    }
                    else {
                        b-=a;
                    }
                }
                cout<<"a%b="<<u<<", a/b="<<v<<", cel mai mare divizor comun: "<<a;
            } break;
        default:
            cout<<"introduceti un nr";
            cin>>u;
            cout<<endl;
            cout<<"divizorii:";
            for (v=1; v<=u; ++v) {
                if (u%v== 0)
                cout<<v<<endl;
            }
            cout<<"nr de divizori: "<<"suma divizorilor: ";
    }
    return 0;
}