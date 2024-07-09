#include <bits/stdc++.h>
using namespace std;

int  n, m, a[100004], ret, mx;

bool check(int mid) {
	int tmp = mid, cnt=1;
	for (int i = 0; i < n; i++) {
		if (mid - a[i] < 0) {
			mid = tmp;
			cnt++;
		}
		mid -= a[i];
	}
	return cnt <= m;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int mid;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		mx = max(mx, a[i]);
	}
	int l = mx, r = 1000000004;
	while (l <= r) {
		mid = (l + r) / 2;
		if (check(mid)) {
			ret = mid;
			r = mid - 1;
		}
		else l = mid + 1;
	}
	cout << ret << "\n";
	return 0;
}
