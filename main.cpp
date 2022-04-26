#include <bits/stdc++.h>
//#include "debug.h" //Elimina esta linea
#define fore(i, l, r) for (long long i = (l); i < (r); i++)
#define forex(i, l, r) for (long long i = (l); i >= (r); i--)
#define ll long long
#define ull unsigned long long
#define nl cout<<"\n"
#define cnl "\n"
#define gfc "\033[32;1m"
#define rfc "\033[0m"
#define pb push_back
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string menu1="", menu2="", aux;
    int x, m1=0, m2=0;
    cin>>menu1>>menu2>>x;
    fore(i,0,x){
        cin>>aux;
        if(aux==menu1) m1++;
        else m2++;
    }
    if(m1==m2) cout<<"EMPATE";
    else if(m1>m2) cout<<menu1<<" "<<m1-m2;
    else cout<<menu2<<" "<<m2-m1;

}