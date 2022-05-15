#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, r;
    cin>>a>>b;
    r=a/b;  //aquí saco la división que, en caso de que me de decimales me lo redondea abajo
    if(r*a==b){  //multiplico por a para saber si estuvo o no redondeada
        cout<<r;
        return 0; //al hacer return termina el programa, ya no continúa con lo de abajo
    }
    cout<<r+1;  //imprimo el numero siguiente porque estuvo redondeada
    return 0;
}