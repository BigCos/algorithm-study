#include <bits/stdc++.h>
using namespace std;

int n, c, a[1004];
map<int, int> mp, mpf;
vector<pair<int, int>> v;

bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.first == b.first) {
		return mpf[a.second] < mpf[b.second];
	}
	return a.first > b.first;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> c;
	for (int i = 0; i < n; i++) {
		cin >> a[i]; mp[a[i]]++;
		if (mpf[a[i]] == 0) { mpf[a[i]] = i+1; }
	}
	for (auto i : mp) v.push_back({ i.second, i.first });
	sort(v.begin(), v.end(), cmp);
	for (auto i : v) {
		for (int j = 0; j < i.first; j++) cout << i.second << " ";
	}
	return 0;
}
