#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while (t--){
		int n; string s;
		cin >> n >> s;
		for (char& c : s) c = tolower(c);
		s.erase(unique(s.begin(), s.end()), s.end());
		if (s=="meow") cout << "YES\n";
		else cout << "NO\n";
	}
}
