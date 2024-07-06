#include <bits/stdc++.h>
using namespace std;

int  n, m, a[100004], ret, mx;

bool check(int mid) {
	if (mx > mid) return false;
	int tmp = mid, cnt=0;
	for (int i = 0; i < n; i++) {
		if (mid - a[i] < 0) {
			mid = tmp;
			cnt++;
		}
		mid -= a[i];
	}
	if (tmp != mid) cnt++;
	return cnt <= m;
}

int main() {
	int mid, sum=0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i]; sum+=a[i];
		mx = max(mx, a[i]);
	}
	int l = 0, r = sum;
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
