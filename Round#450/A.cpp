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
#define t cout << "TESTE" << endl
#define debug(x) if(on)cout << x << endl
#define on true
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pb push_back
#define debugv(v) for(auto x : v)cout << x << endl;


int main(){


	int n;

	int contEsq = 0, contDir = 0;

	cin >> n;

	ll a, b;
	FI(n){
		cin >> a >> b;

		if(a < 0)
			contEsq++;
		else
			contDir++;
	}

	if(contEsq == 0 || contDir == 0){
		cout << "Yes\n";
		return 0;
	}

	if(contEsq == 1 || contDir == 1){
		cout << "Yes\n";
		return 0;
	}

	cout << "No\n";
return 0;
}
