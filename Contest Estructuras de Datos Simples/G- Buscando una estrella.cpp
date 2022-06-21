#include <bits/stdc++.h>
using namespace std;
#define fore(i, l, r) for (long long i = (l); i < (r); i++)
struct orden{
  bool operator() (long long x, long long y){
    return x > y;
  }
};
int main(){
  long long n, aux, ad1, ad2;
  cin>>n;
  char op=' ';
  priority_queue<long long, vector<long long>, orden> pq;
  fore(i,0,n){
    cin>>op;
    if(op=='R'){
      cin>>aux;
      pq.push(aux);
    }else if(op=='S'){
      if(pq.size()>=3){
        ad2=pq.top();
        cout<<ad2<<" ";
        pq.pop();
        ad1=pq.top();
        cout<<ad1<<" ";
        pq.pop();
        cout<<pq.top()<<"\n";
        pq.push(ad1);
        pq.push(ad2);
      }else cout<<"NO HAY SUFICIENTES PUNTAJES\n";
    }else if(op=='B'){
      if(!pq.empty()){
        pq.pop();
      }
    }
  }
  if(pq.empty()){
      cout<<"NO HUBO GANADOR";
      return 0;
  }
  while(!pq.empty()){
    aux=pq.top();
    pq.pop();
  }
  cout<<"EL PUNTAJE MAS ALTO FUE "<<aux;
}