#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, v1=1, v2=0, v3=0;
    cin>>a;
    char aux;
    for(int i=0;i<a;i++){
        cin>>aux;
        if(aux=='A'){
            swap(v1,v2); // la función swap me permite intercambiar el valor entre 2 variables
        }
        else if(aux=='B'){
            swap(v3,v2);
        }
        else swap(v1,v3);
    }
    if(v1==1) cout<<"1";
    else if(v2==1) cout<<"2";
    else cout<<"3";
}