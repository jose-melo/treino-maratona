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


string s;
int v[30];


int main(){


	cin >> s;


	for(int i = 0; i < s.size(); i++)
		v[s[i]-'a'] = (v[s[i]-'a'] + 1)%2;

	int cont = 0;
	for(int i = 0; i < 30; i++){
		if(v[i]==1){
			cont++;
		}
	}
	
	if(cont == 0 || cont % 2 == 1){
		cout << "First\n";
		return 0;
	}

	cout << "Second\n";

}
