#include <bits/stdc++.h>
using namespace std;
int n, m, a[104][104], visited[104][104], nx, ny;
int cnt1, cnt2;
vector<pair<int, int>> v;
int dy[4] = { -1,0,1,0 };
int dx[4] = { 0,1,0,-1 };

void dfs(int y, int x) {
	visited[y][x] = 1;
	if (a[y][x] == 1) { v.push_back({ y,x }); return; }
	for (int i = 0; i < 4; i++) {
		ny = y + dy[i];
		nx = x + dx[i];
		if (ny >= n || ny < 0 || nx >= m || nx < 0 || visited[ny][nx]) continue;
		dfs(ny, nx);
	}
	return;
}

int main() {
    
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	
	while (true) {
		fill(&visited[0][0], &visited[0][0] + 104 * 104, 0);
		v.clear();
		dfs(0, 0);
		cnt2 = v.size();
		
		for(pair<int,int> b: v)  a[b.first][b.second] = 0; 
		bool flag = 0;
        for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i][j] != 0) flag = 1;
			}
		}
		cnt1++;
		if (!flag) break;
		
	}

	cout <<cnt1<<"\n"<<cnt2<< "\n";
	return 0;
}
