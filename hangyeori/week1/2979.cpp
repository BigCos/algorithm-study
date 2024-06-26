#include <iostream>
using namespace std;


int A, B, C, a, b, cnt[100];
int sum = 0;
int main() {
	cin >> A >> B >> C;
	for (int i = 0; i < 3; i++) {
		cin >> a >> b;
		for (int j = a; j < b; j++) {
			cnt[j]++;
		}
	}

	for (int i = 0; i < 100; i++) {
		if (cnt[i] == 1) { sum += A; }
		else if (cnt[i] == 2) { sum += B * 2; }
		else if (cnt[i] == 3) { sum += C * 3; }
	}
	cout << sum << "\n";
	return 0;
}
