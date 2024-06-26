#include <string>
#include <iostream>
#include <map>
using namespace std;


int n, m;
string s;
map<string, int> m1;
map<int, string> m2;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> s;
		m1[s] = i + 1;
		m2[i + 1] = s;
	}
	for (int i = 0; i < m; i++) {
		cin >> s;
		if (atoi(s.c_str()) == 0) { cout << m1[s] << "\n"; }
		else cout << m2[atoi(s.c_str())] << "\n";
	}
}
