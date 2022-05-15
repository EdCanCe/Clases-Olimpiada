#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a=1,b=1,c=2,d=3,aux=1;
	cin>>n;
	while(d<n){
		a=b;
		b=c;
		c=a+b;
		while(d<c){ // imprimo todos los numeros entre el último numero y el actual
			if(d==n) break;
			cout<<d<<' ';
			d++;
		}
		d++;
	}
}