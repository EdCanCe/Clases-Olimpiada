#include<bits/stdc++.h>
using namespace std;

int main(){
	float a, b;
    cin>>a>>b;
    if(a+b<100){ // si su suma da menos de 100 hace esto
        cout<<fixed<<setprecision(2)<<"No habra descuento :(\n"<<a<<" "<<b;
        return 0; // termino el programa
    }
    cout<<"Habra descuento inicial para ambos\n";
    if(a>b){
        cout<<fixed<<setprecision(2)<<"Ademas, habra descuento especial para el primer comprador\n"<<a*0.8<<" "<<b*0.9;
    }
    else if(a<b){
        cout<<fixed<<setprecision(2)<<"Ademas, habra descuento especial para el segundo comprador\n"<<a*0.9<<" "<<b*0.8;
    }else{ // en caso de que no se cumpla ninguna condición
        cout<<fixed<<setprecision(2)<<a*0.9<<" "<<b*0.9;
    }
	return 0;
	
}