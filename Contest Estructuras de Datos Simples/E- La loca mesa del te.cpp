#include <bits/stdc++.h>
#define fore(i, l, r) for (long long i = (l); i<(r); i++)
#define ll long long
#define cnl "\n"
#define nl cout<<"\n"
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    char op, dir;
    string a;
    deque<string> dq;
    fore(i,0,n){
        cin>>op>>dir;
        if(op=='E'){
            cin>>a;
            if(dir=='I') dq.push_back(a);
            else dq.push_front(a);
        }else{
            if(dir=='I'){
                cout<<dq.back();
                dq.pop_back();
            }else{
                cout<<dq.front();
                dq.pop_front();
            }
            nl;
        }
    }
    
}