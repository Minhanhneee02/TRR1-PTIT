//powered by Jayce
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define pb push_back

//Tinh a mu b
/*  a^b = a^(b/2) * (a^(b/2) (if b % 2 == 0)
		= a^(b/2) * (a^(b/2) * a (else)	
*/

ll Power(int a, int b) {
	ll res = 1;
	
	while (b) {
		if (b % 2 == 1) {
			res *= a;
		}
		b /= 2;
		a *= a;
	}
	return res;
}

ll Power2(int a, int b) {
	if (b == 0)
		return 1;	
	
	ll x = Power2(a, b/2);
	if (b % 2 == 1)
		return x*x*a;
	return x*x;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a, b;
	cin >> a >> b;
	
	cout << Power(a, b);

	return 0;
}

