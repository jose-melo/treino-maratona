#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int 
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define fi first
#define mp make_pair
#define se second
#define FI(n) for(int i = 0; i < n; i++)
#define FOR(i,a,n) for (int i=(a);i<(n);++i)
#define debug(x) if(on)cout << x << endl
#define on true
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pb push_back
#define debugv(v) for(auto x : v)cout << x << endl;


int main(){

	int n, m;
	int x, prox;

	cin >> n >> m;

	x = 1;
	ll time = 0;
	for(int i = 0; i < m; i++){
		cin >> prox;
		
		if(prox > x)
			time += (prox-x);
		
		if(prox < x)
			time += (n-x)+prox;
		x = prox;
	}
	
	cout << time << endl;


}
