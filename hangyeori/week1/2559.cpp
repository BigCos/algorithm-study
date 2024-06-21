#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int n, k, tmp, sum[100001], ret = -10000000;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> tmp;
		sum[i] = sum[i - 1] + tmp;
	}
	for (int i = k; i <= n; i++) {
		ret = max(ret, sum[i] - sum[i - k]);
	}
	cout << ret << "\n";
	return 0;
}
