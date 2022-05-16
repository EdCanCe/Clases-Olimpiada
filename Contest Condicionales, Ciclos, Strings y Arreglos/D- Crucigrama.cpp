#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string a, b;
    int y, x;
    bool q=0;
    cin>>a>>b;
    for(int i=0; i<a.size(); i++){
        for(int j=0; j<b.size(); j++){
            if(a[i]==b[j]){ //encuentro el punto en el que ambas palabras coinciden
                q=1;
                x=i; //guardo el eje x de la palabra
                y=j; //guardo el eje y de la parabra
                break;
            }
        }
        if(q==1) break;
    }
    for(int i=0; i<b.size(); i++){
        for(int j=0; j<a.size(); j++){
            if(j==x) cout<<b[i]; //si es el eje x imprimo el caracter actual de b
            else if(y==i) cout<<a[j]; //si es el eje y imprimo el carater actual de a
            else cout<<'.';
        }
        cout<<"\n";
    }
}