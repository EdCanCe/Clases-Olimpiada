#include <bits/stdc++.h>
using namespace std;

int main(){

    string msj;
    int n;
    cin>>msj;
    for(int i=0; i<msj.size(); i++){
        n=msj[i];
        if(n>=48&&n<=57){ // si está entre 48 y 57 significa que es un número
            i++;
            for(int j=1; j<n-48; j++) cout<<msj[i]; //lo repito hasta n-48 pq si es 1 es 49, reptite una vez... así con los demás nums
        }
        cout<<msj[i]; //imprimo el actual caracter
    }
}