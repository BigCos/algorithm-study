#include <bits/stdc++.h>
using namespace std;

int n, m, k, tmp, ret;
int r, l=1;
int main() {
	cin >> n >> m >> k;
	for (int i = 0; i < k; i++) {
		r = l + m - 1;
		cin >> tmp;
		if (tmp >= l && tmp <= r)	continue;
		else {
			if (tmp < l) {
				ret += (l - tmp);
				l = tmp;
			}
			else {
				l += (tmp-r);
				ret += (tmp - r);
			}
		}
	}
	cout << ret << "\n";
	return 0;
}
