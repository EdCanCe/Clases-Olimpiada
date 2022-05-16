#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, s;
    cin>>n;
    for(int i=0; i<n; i++){ // Repito el ciclo dependiendo de los escenarios
        cin>>s; //leo la cantidad de saltos
        int m[s], a=0, b=0; //a para saltos altos y b para bajos
        for(int j=0; j<s; j++) cin>>m[j]; // leo los saltos
        for(int j=1; j<s; j++){
            if(m[j]>m[j-1]) a++; //si son altos sumo
            else if(m[j]<m[j-1]) b++; //si son bajos sumo
        }
        cout<<"Escenario "<<i+1<<": "<<a<<" "<<b<<"\n";
    }
}