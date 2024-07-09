#include <bits/stdc++.h>
using namespace std;

long long t, n, m, a[300004], ret=1e18;

bool check(long long mid) {

	long long num = 0;
	for (int i = 0; i < m; i++) {
		 num += a[i]/mid;
		 if (a[i] % mid) num++;
	}
	return n >= num;
}

int main() {
	long long l = 1, r=0, mid;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> a[i]; r = max(r, a[i]);
	}
	while (l <= r) {
		mid = (l + r) / 2;
		if (check(mid)) {
			ret = min(ret, mid);
			r = mid - 1;
		}
		else l = mid + 1;
	}
	cout << ret << "\n";
	return 0;
}
