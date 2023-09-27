//powered by Jayce
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define pb push_back

//So tribonacci
ll t[100];

void init() {
	t[0] = t[1] = 1;
	t[2] = 1;
	
	for (int i = 2; i < 92; ++i) {
		t[i] = t[i-1] + t[i-2] + t[i-3];
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
		if (t[i] == n)
			ok = 1;
	}
	
	ok == 1 ? cout << "YES\n" : cout << "NO\n";


	return 0;
}

