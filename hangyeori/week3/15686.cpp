#include <bits/stdc++.h>
using namespace std;

int n, m, a[54][54];
int r = 987654321;
vector<vector<int>> clist;
vector<pair<int, int>> h, c;

void combi(int s, vector<int> v) {
	if (v.size() == m) {
		clist.push_back(v);
		return;
	}
	for (int i = s + 1; i < c.size(); i++) {
		v.push_back(i);
		combi(i, v);
		v.pop_back();
	}
	return;
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
			if (a[i][j] == 1) h.push_back({ i,j });
			if (a[i][j] == 2) c.push_back({ i,j });
		}
	}
	vector<int> v;
	combi(-1, v);
	for (vector<int> cl : clist) {
		int ret = 0;
		for (pair<int, int> h_ : h) {
			int m_ = 987654321;
			for (int ch : cl) {
				int d = abs(h_.first - c[ch].first) + abs(h_.second - c[ch].second);
				m_ = min(m_, d);
			}
			ret += m_;
		}
		r = min(r, ret);
	}
	cout << r << "\n";
	return 0;
}
