#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, x, y;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x>>y;
        if(x>y) cout<<x;
        else if(x<y) cout<<y;
        else cout<<"NO ITZMAN";
        cout<<"\n";
    }

}