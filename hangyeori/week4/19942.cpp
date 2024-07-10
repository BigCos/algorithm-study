#include <bits/stdc++.h>
using namespace std;

int n, mp, mf, ms, mv;
int p, f, s, v, cost, sum;
int ret = 987654321;
struct A
{
	int mp, mf, ms, mv, cost;
} a[16];
map<int, vector<vector<int>>> ret_v;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    cin >> mp >> mf >> ms >> mv;
    for (int i = 0; i < n; i++) {
        cin >> a[i].mp >> a[i].mf >> a[i].ms >> a[i].mv>>a[i].cost;
    }
    for (int i = 1; i < (1 << n); i++) {
        p = f = s = v = sum=0;
        vector<int> v_;
        for (int j = 0; j < n; j++) {
            if (i & j << n) {
                v_.push_back(j + 1);
                p += a[j].mp;
                f += a[j].mf;
                s += a[j].ms;
                v += a[j].mv;
                sum += a[j].cost;
            }
        }
        

    }

}
