#include <bits/stdc++.h>
using namespace std;
int n;
string s;

bool chk(string s) {
	stack<char> st;
	for (char c : s) {
		if (c == '(') st.push(c);
		else {
			if (!st.empty()) st.pop();
			else return false;
		}
	}
	return st.empty();
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (chk(s)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
