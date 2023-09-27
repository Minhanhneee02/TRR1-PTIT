//powered by Jayce
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define pb push_back

//So nguyen to cung nhau voi n trong khoang 1 toi n
ll Euler(ll n) {
	ll res = n;
	
	for (int i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0) {
			while (n % i == 0) {
				n /= i;
				res -= res/i;
			}
		}
	}
	if (n > 1)
		res -= res/n;
	return res;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	ll n;
	cin >> n;
	
	cout << Euler(n);

	return 0;
}

