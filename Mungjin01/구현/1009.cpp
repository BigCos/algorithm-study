#include <bits/stdc++.h>
using namespace std;

int main(){
    int c;
    cin >> c;
    
    for(int i = 0; i < c; i++){
        int a, b, answer = 1;
        cin >> a >> b;

        for(int j=0; j<b; j++){
            answer = (answer * a) % 10;
        }

        if (answer == 0) cout << 10 << "\n";
        else cout << answer << "\n";
    }
    return 0;
}