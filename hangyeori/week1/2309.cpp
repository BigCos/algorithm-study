#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a[9];
int sum = 0;


void solve(int a[9]) {
    int x = 0;
    int y = 0;
    sort(a, a + 9);
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < i; j++) {
            if (sum - a[i] - a[j] == 100) {
                x = i;
                y = j;
            }
        }
    }
    for (int z = 0; z < 9; z++) {
        if (z != x && z != y) { cout << a[z] << '\n'; }
    }
}


int main()
{

    for (int i = 0; i < 9; i++) {
        cin >> a[i];
        sum += a[i];
    }
    solve(a);
    return 0;
}
