#include<bits/stdc++.h>
using namespace std;

int main()
{
	float Y,Z,X,r;
	cin>>Y;
	cin>>X;
	cin>>Z;
	r=X*Y;  // saco el precio total
	if(r>Z){cout<<"NO"; // si pasa de mi presupuesto no compro
	}
	if(r<=Z){cout<<"SI"; // si si me alcanza compro los limones
	}
	return 0;
	
}