#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    vector<int> v;
    for(int i=1; i<=b; i++){
        for(int j=0; j<i; j++){
            v.push_back(i);
        }
    }

    int answer = 0;
    for(int i=a-1; i<b; i++){
        answer += v[i];
    }

    cout << answer << "\n";
    return 0;
}
