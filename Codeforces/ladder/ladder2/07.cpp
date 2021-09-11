#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <map>

#define ll long long

using namespace std;

int main() {

    ll a, b; cin >> a >> b;
    ll result = 0;
    while(a % b != 0) {
        result += a / b;
        ll c = a % b;
        a = b;
        b = c;
    }
    result += a / b;

    cout << result << endl;

	return 0;
}
