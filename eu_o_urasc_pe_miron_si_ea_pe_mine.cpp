#include <iostream>
using namespace std;

int main() {
    char c;
    int u, v, x, y, z;
    cout<<"introduceti un caracter:";
    cin>>c;
    cout<<endl;
    switch (c)
        case 'A'...'Z':
            cout<<"introduceti 5 cifre:";
            cin>>u>>v>>x>>y>>z;
            cout<<endl;
    return 0;
}