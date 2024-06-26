#include <bits/stdc++.h>
using namespace std;


const int max_ = 104;
int dy[] = {-1,0,1,0};
int dx[] = {0,1,0,-1};
int n, m, a[max_][max_], visited[max_][max_], y, x, ny, nx;
string s;

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < m; j++) {
			a[i][j] = s[j] - '0';
		}
	}

	queue<pair<int, int>> q;
	visited[0][0] = 1;
	q.push({ 0,0 });
	while (q.size()) {
		tie(y, x) = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			ny = y + dy[i];
			nx = x + dx[i];
			if (ny < 0 || ny >= n || nx < 0 || nx >= m || a[ny][nx] == 0) continue;
			if (visited[ny][nx]) continue;
			visited[ny][nx] = visited[y][x] + 1;
			q.push({ ny, nx });
		}
	}
	cout<<visited[n - 1][m - 1] << "\n";
	return 0;
}
