#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    if(a==b&&b==c){
        cout<<"equilatero";
    }else if(a==b||b==c||a==c){
        cout<<"isosceles";
    }else cout<<"escaleno";
}