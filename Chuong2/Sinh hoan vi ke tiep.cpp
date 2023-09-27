//powered by Jayce
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using fl = float;
#define pb push_back

int n, k, a[1005];

void Next() {
	int i = n-1;
	
	while (i >= 1 && a[i] > a[i+1]) {
		--i;
	}
	
	//in cau hinh tu 1 toi n
	if (i == 0) {
		for (int i = 1; i <= n; ++i) {
			cout << i << " ";
		}
	} 
	
	//Neu chua phai cau hinh cuoi cung
	else {
		int j = n;
		
		while (a[i] > a[j])
			--j;
		swap(a[i], a[j]);
		reverse(a+i+1, a+n+1);
		
		for (int i = 1; i <= n; ++i) {
			cout << a[i] << " ";
		}		
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		for (int i = 1; i <= n; ++i) 
			cin >> a[i];
		Next();
		cout << "\n";
	}

	return 0;
}

