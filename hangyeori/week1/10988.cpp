#include<bits/stdc++.h>
#include <string>
#include <iostream>
using namespace std;



int main() {
    string s, tmp;
    cin >> s;
    tmp = s;
    reverse(tmp.begin(), tmp.end());
    if (tmp == s) { cout << 1<<endl; }
    else
        cout << 0<<endl;

    return 0;
}
