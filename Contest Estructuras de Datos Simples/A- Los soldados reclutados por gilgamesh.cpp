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
	queue<string> q;
	string aux;
	while(cin>>aux){
		if(aux=="LLAMA"){
			cin>>aux;
			q.push(aux);
			cout<<aux;
			nl;
		}else{
			if(!q.empty()){
				cout<<q.front();
				q.pop();
			}else{
				cout<<"IMPOSIBLE";
			}
			nl;
		}
	}
}