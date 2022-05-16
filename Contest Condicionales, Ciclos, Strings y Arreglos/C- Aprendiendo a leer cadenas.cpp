#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string msj;
    cin>>n;
    getline(cin,msj); //lo hago para que se pase a la siguiente linea
    for(int i=0; i<n; i++){
        getline(cin,msj); //leo la actual cadena
        cout<<"\""<<msj<<"\" tiene "<<msj.size()<<" caracteres"<<"\n";
    }
}