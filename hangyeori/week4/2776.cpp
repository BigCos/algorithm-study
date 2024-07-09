#include <bits/stdc++.h>
using namespace std;

int t, n, m, tmp;

int check(int tmp, vector<int>& v) {
	int l = 0; int r = v.size() - 1;
	int mid;
	while (l <= r) {
		mid = (l + r) / 2;
		if (v[mid] > tmp) { r = mid - 1; }
		else if (v[mid] == tmp) { return 1; }
		else { l = mid + 1; }
	}
	return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	cin >> t;
	while(t--){
		vector<int> v;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> tmp; v.push_back(tmp);
		}
		sort(v.begin(), v.end());
		cin >> m;
		for (int i = 0; i < m; i++) {
			cin >> tmp;
			cout << check(tmp, v)<<"\n";
		}
	}
	return 0;
}
