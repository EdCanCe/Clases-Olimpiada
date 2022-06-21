#include <bits/stdc++.h>
using namespace std;
#define fore(i, l, r) for (long long i = (l); i < (r); i++)
int main(){
  int n, op, m=0;
  cin>>n;
  stack<int> pm;
  fore(i,0,n){
    cin>>op;
    if(op==1){
      cin>>op;
      if(op>m) m=op;
      pm.push(m);
    }else if(op==2){
      if(!pm.empty()){
        pm.pop();
        if(!pm.empty()){
          m=pm.top();
        }else m=0;
      }   
    }else if(op==3){
      cout<<pm.top()<<"\n";
    }
  }
}