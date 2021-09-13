#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <map>

#define ll long long

using namespace std;

void solve() {
    int n, s, k; cin >> n >> s >> k;
    vector<bool> up(1001, true);
    vector<bool> down(1001, true);
    for(int i = 0; i < k; i++) {
        int x; cin >> x;
        if(abs(x - s) <= 1000) {
            if(x >= s) {
                up[x - s] = false;
            } else {
                down[s - x - 1] = false;
            }
        }
    }
   
    int r1 = 0;
    while(r1 < 1001 && !up[r1]) {
        r1++;
    }
    if(s+r1 > n) {
        r1 = 1000000001;
    }

    int r2 = 0;
    while(r2 < 1001 && !down[r2]) {
        r2++;
    }
    r2++;
    if(s-r2 <= 0) {
        r2=1000000001;
    }

    cout << min(r1, r2) << endl;
}

int main() {
    
    int t; cin >> t;
    while(t > 0) {
        solve();
        t--;
    }

	return 0;
}
