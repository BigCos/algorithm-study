#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio;
	cin.tie(NULL);

	int N, sum;
	int m;
	int temp;
	int result = 0;
	
	cin >> N;

	for (int i = N - 1; i >= 1; i--) {
		sum = i;
		temp = i;
		while (temp != 0) {
			m = temp % 10;
			temp = temp / 10;
			sum += m;
		}
		if (sum == N) result = i;

	}

	cout << result;

}
