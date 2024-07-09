#include <bits/stdc++.h>
using namespace std;

int n,  s, t;
int ret = 1;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++) {
		cin >> s >> t;
		v.push_back({ t, s });
	}
	sort(v.begin(), v.end());
	s = v[0].second;
	t = v[0].first;
	for (int i = 1; i < n; i++) {
		if (v[i].second < t) continue;
		s = v[i].second; t = v[i].first; ret++;
	}
	cout << ret << '\n';
	return 0;
}
