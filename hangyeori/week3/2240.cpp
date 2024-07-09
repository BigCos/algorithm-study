#include <bits/stdc++.h>
using namespace std;

int dp[1004][2][34], t, w, b[1004];

int go(int i, int tree, int cnt) {
	if (cnt < 0) return -1e9;
	if (i == t) return cnt==0?0:-1e9;
	int& ret =dp[i][tree][cnt];
	if (~ret) return ret;
	return ret=max(go(i + 1, tree, cnt), go(i + 1, tree ^ 1, cnt - 1)) + (tree == b[i] - 1);
}

int main() {
	memset(dp, -1, sizeof(dp));
	cin >> t >> w;
	for (int i = 0; i < t; i++) {
		cin >> b[i];
	}
	cout << max(go(0, 0, w), go(0, 1, w - 1)) << "\n";
	return 0;
}
