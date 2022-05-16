#include <bits/stdc++.h>
using namespace std;

int main(){

    int a[10]={}; //inicializo el arreglo en ceros
    int n;
    cin>>n;
    string msj;
    for(int i=0; i<=n; i++){
        getline(cin, msj);
        for(int j=0; j<msj.size(); j++){ //ciclo que se repite la cantidad de veces que los caracteres
            if(msj[j]>=48&&msj[j]<=57) a[msj[j]-48]++; //si es un numero, aumento el n uno el arreglo del caracter-48, que como vimos antes, en este caso es el 0
        }
    }
    for(int i=0; i<10; i++){
        cout<<"El "<<i<<" aparece "<<a[i]<<" veces.\n";
    }


}