#include <bits/stdc++.h>
using namespace std;

long long dp[91];
int n;

long long fibo(long long i) {
    dp[0]=0;
    dp[1]=1;
	if (i == 0 || i == 1) return i;
	long long& ret = dp[i];
	if (ret) return ret;
    return ret = fibo(i - 1) + fibo(i - 2);
 
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	cout << fibo(n) << "\n";
	return 0;
}
