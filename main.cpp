#include <bits/stdc++.h>
using namespace std;

int main(){
  string msj;
  cin>>msj;
  bool r1=1, r2=1, r3=1;
  char x=msj[0];
  if(x>96) r3=0; // x es minúscula
  for(int i=0;i<msj.size();i++){
    if(r3==0&&msj[i]<96) r2=0; //si la primera es minuscula toda deberia ser tambien, pero si es mayuscula la niego
    else if(r3==1&&msj[i]>96) r2=0;
    if(i>0&&msj[i]<96) r1=0; //si no es la iteración 1 pero es mayúsculas la declaro como un no
    if(r1==0&&r2==0){ //checo si ya no puede ser para imprimir no y terminar el programa
      cout<<"NO";
      return 1;
    }
  }
  if(r1==1||r2==1) cout<<"SI";
}