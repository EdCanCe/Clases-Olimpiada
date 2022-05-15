#include<bits/stdc++.h>
using namespace std;
int main(){
int t,b,l,r,a,m;
	cin >> t >> b;
	r=t/2;
	l=r;
	a=r/(b-1);
	l=r+(r-a);
	cout << l << "\n";
}