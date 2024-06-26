#include <string>
#include <iostream>
using namespace std;

string s;
int cnt[26];

int main() {
	cin >> s;
	for (char c : s) {
		cnt[c - 'a']++;
	}
	for (int i = 0; i < 26; i++) cout << cnt[i] << " ";
	return 0;
}
