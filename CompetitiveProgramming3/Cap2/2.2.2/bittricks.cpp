#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define fi first
#define se second
#define f(n) for(int i = 0; i < n; i++)
#define f2(n) for(int i = 1; i <= n; i++)
#define t cout << "TESTE" << endl
#define debug(x) if(on)cout << x << endl
#define on true
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)


int main(){


	int a, b;

	cin >> a >> b;

	int resto = 0;


	for(int bit = 0; bit < log2(b); bit++){
		if(a & (1<<bit))
			resto |= 1<<bit;
	}

	cout << "Resto de " << a <<  " / " << b << ": " << resto << endl;


	




}

