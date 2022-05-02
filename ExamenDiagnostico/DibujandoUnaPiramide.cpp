#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    char x;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        for(int j=0; j<=i; j++){
            cout<<x<<" ";
        }
        cout<<"\n";
    }

}