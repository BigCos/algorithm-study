#include <string>
#include <iostream>
using namespace std;

int main() {
    string s;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 65 && s[i] < 97) {
             s[i] += 13;
             if (s[i] > 90) { s[i] -= 26; }
        }
        else if (s[i] >= 97 && s[i] <= 122) {
            if (s[i] + 13 > 122) { s[i] -= 13; }
            else
                s[i] += 13;
         
        }
        cout << s[i];
    }
    return 0;
}
