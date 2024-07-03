#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio;
	cin.tie(0);

	int N;
	int min = 5000;

	cin >> N;

	for (int i = 0; i <= N / 5; i++) {
		for (int j = 0; j <= N / 3; j++) {
			if (i * 5 + j * 3 == N) {
				if (min > i + j) min = i + j;
			}
		}
	}

	if (min != 5000) {
		cout << min;
	}
	else {
		cout << -1;
	}
}
