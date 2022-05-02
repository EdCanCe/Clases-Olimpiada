#include <bits/stdc++.h>
using namespace std;

int main(){

    string menu1="", menu2="", aux;
    int x, m1=0, m2=0;
    cin>>menu1>>menu2>>x;
    for(int i=0; i<x; i++){
        cin>>aux;
        if(aux==menu1) m1++; // checo si la actual comida es igual a la primera, le agrego uno a su contador
        else m2++; // en caso de que no le agrego el contador al segundo
    }
    if(m1==m2) cout<<"EMPATE";
    else if(m1>m2) cout<<menu1<<" "<<m1-m2;
    else cout<<menu2<<" "<<m2-m1;

}