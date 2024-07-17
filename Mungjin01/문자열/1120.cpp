#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int length = a.size(); 

   
    for (int i = 0; i <= b.size() - a.size(); i++) {
        int cur = 0;
        for (int j = 0; j < a.size(); j++) {
            if (a[j] != b[i + j]) {
                cur++;
            }
        }
        length = min(length, cur);
    }

    cout << length << "\n";

    return 0;
}
