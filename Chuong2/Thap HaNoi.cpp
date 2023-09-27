//powered by Jayce
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define pb push_back

void towerofHanoi(int n, char from_rod, char to_rod, char aux_rod) {
	if (n == 0) {
		return;
	}
	
	towerofHanoi(n-1, from_rod, aux_rod, to_rod);
	cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << "\n";
	towerofHanoi(n - 1, aux_rod, to_rod, from_rod);
	
			
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	towerofHanoi(n, 'A', 'C', 'B');

	return 0;
}

