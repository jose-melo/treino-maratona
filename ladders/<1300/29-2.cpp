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
	int v[112345];

	cin >> n;

	int aux;
	for(int i = 1; i <= n; i++){
		cin >> aux;
		v[aux] = i;
	}

	cin >> m;

	ll a = 0, b = 0;
	for(int i = 0; i < m; i++){
		cin >> aux;

		a += v[aux];
		b += (n+1)-v[aux];
	}

	cout << a << " " << b << endl;


}
