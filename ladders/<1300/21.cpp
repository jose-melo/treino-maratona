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


	int a, b, c, d;

	cin >> a >> b >> c >> d;

	set<int> s;

	s.insert(a);

	int cont = 0;
	if(s.find(b) != s.end())
		cont++;

	s.insert(b);

	if(s.find(c) != s.end())
		cont++;

	s.insert(c);
	
	if(s.find(d) != s.end())
		cont++;

	cout << cont << endl;


}
