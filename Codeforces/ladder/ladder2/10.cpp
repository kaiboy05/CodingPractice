#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <map>

#define ll long long

using namespace std;

int main() {
    
    ll l1, r1, l2, r2, k;
    cin >> l1 >> r1 >> l2 >> r2 >> k;

    ll start = max(l1, l2);
    ll end = min(r1, r2);

    if(end < start) {
        cout << 0 << endl;
    } else {
        if(start <= k && k <= end) {
            cout << end - start << endl;
        } else {
            cout << end - start + 1 << endl;
        }
    }

	return 0;
}
