#include <bits/stdc++.h>
using namespace std;
#define fore(i, l, r) for (long long i = (l); i < (r); i++)
int main(){
    int n, s=1, aux;
    cin>>n;
    deque<int> dq;
    string op;
    fore(i,0,n){
        cin>>op;
        if(op=="AGREGA"){
            cin>>aux;
            if(s==1){
                dq.push_front(aux);
            }else{
                dq.push_back(aux);
            }
        }else if(op=="QUITA"){
            if(s==1){
                cout<<dq.front();
                dq.pop_front();
            }else{
                cout<<dq.back();
                dq.pop_back();
            }
            cout<<"\n";
        }else{
            s*=-1;
        }
    }
}