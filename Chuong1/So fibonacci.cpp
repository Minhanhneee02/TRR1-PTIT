//powered by Jayce
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define pb push_back

//So Fibonacci
ll f[100];

void init() {
	f[0] = 0;
	f[1] = 1;
	
	for (int i = 2; i < 92; ++i) {
		f[i] = f[i-1] + f[i-2];
	}
	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	init();
	ll n;
	cin >> n;
	int ok = 0;

	for (int i = 0; i <= 92; ++i) {
		if (f[i] == n)
			ok = 1;
	}
	
	ok == 1 ? cout << "YES\n" : cout << "NO\n";

	return 0;
}

