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

int n;
int v[212345];
ll res;


int main(){
	
	cin >> n;

	FOR(i, 1, n+1)
		cin >> v[i];
	
	res = 0;

	FOR(i, 0, n)
		res += abs(v[i] - v[i+1]);

	cout << res << "\n";
return 0;	
}



