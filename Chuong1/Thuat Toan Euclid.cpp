//powered by Jayce
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define pb push_back

//Tim UCLN
ll UCLN(ll m, ll n) {
	if (n == 0 || m == 0)
		return m+n;
		
	while (m != n) {
		if (m > n) 
			m = m - n;
		 else 
			n = n - m;				
	}
	return m;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll m, n;
	cin >> m >> n;
	
	cout << UCLN(m, n);
	

	return 0;
}

