#include <string>
#include <iostream>
using namespace std;

int n;
int cnt[26];
string s;
int sum=0;


int main() {

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        cnt[s[0] - 97]++;
    }

    for (int i = 0; i < 26; i++) {
        
        if (cnt[i] >= 5) { char ret = 'a'; ret += i; cout << ret; sum++; }
    }

    if (sum == 0) { cout << "PREDAJA" << "\n"; }
   
    return 0;
}
