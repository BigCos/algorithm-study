#include <bits/stdc++.h>
using namespace std;
int n, a[41];
int cnt1 = 0; int cnt2 = 0;

int fib(int n) {
	if (n == 1 | n == 2) { cnt1++; return 1; }
	else return(fib(n - 1) + fib(n - 2));
}

int main() {
	cin >> n;
	fib(n);
	a[1] = a[2] = 1;
	for (int i = 3; i <= n; i++) { a[i] = a[i - 1] + a[i - 2]; cnt2++; }
	cout << cnt1<<" "<<cnt2 << "\n";
	return 0;
}
