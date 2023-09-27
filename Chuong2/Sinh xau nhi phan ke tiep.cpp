//powered by Jayce
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define pb push_back

//Sinh xau np ke tiep
void Next(string s) {
	int i = s.size()-1;
	
	while (i >= 0 && s[i] == '1') {
		s[i] = '0';
		--i;
	}
	
	if (i != -1) {
		s[i] = '1';
	}
	
	cout << s << "\n";
	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		
		Next(s);
				
	}

	return 0;
}

