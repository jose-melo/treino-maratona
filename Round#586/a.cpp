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
	string s;

	cin >> n;

	cin >> s;

	int cont = 0;
	int faltam = n;	
	for(int i = 0; i < n; i++){
		if(s[i] == 'n'){
			cont++;
			faltam -= 3;	
			cout << "1 ";
		}
	}
	
	for (int i = 0; i < faltam/4; i++)
		cout << "0 ";
	
	cout << endl;

return 0;
}




