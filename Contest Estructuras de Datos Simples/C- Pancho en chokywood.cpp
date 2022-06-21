#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    int n, m, e=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>m;
        s.push(m);
    }
    m=0;
    while(!s.empty()){
        if(s.top()>m){
            e++;
            m=s.top();
        }
        s.pop();
    }
    cout<<e;

    return 0;
}