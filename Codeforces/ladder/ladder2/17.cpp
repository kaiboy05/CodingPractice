#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <map>

#define ll long long

using namespace std;

void solve() {
    ll n, k; cin >> n >> k;
    if(n & 1) {
        if(k % 2 == 0) {
            cout << "NO" << endl;
        } else {
            ll sum = k * k;
            cout << (sum > n ? "NO" : "YES") << endl;
        }
    } else {
        if(k & 1) {
            cout << "NO" << endl;
        } else {
            ll sum = k * k;
            cout << (sum > n ? "NO" : "YES") << endl;
        }
    }
}

int main() {
    
    int t; cin >> t;
    while(t > 0) {
        solve();
        t--;
    }

	return 0;
}
