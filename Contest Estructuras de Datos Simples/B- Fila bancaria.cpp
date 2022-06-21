#include <bits/stdc++.h>
#define fore(i, l, r) for (long long i = (l); i < (r); i++)
#define forex(i, l, r) for (long long i = (l); i >= (r); i--)
#define ll long long
#define ull unsigned long long
#define nl cout<<"\n"
#define cnl "\n"
#define gfc "\033[32;1m"
#define rfc "\033[0m"
#define pb push_back
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n, p=0;
	cin>>n;
	char op;
	fore(i,0,n){
		cin>>op;
		if(op=='E') p++;
		else if(op=='N'){
			if(p>=4) cout<<"no espera\n";
			else cout<<"espera\n";
		}else p--;
	}
}