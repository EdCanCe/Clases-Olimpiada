#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x, y, z;
    cin>>x;
    y=(x+5)/(2*(x+1));
    z=(y*y+x*(x-y-y))/(x*y);
    cout<<z;
}