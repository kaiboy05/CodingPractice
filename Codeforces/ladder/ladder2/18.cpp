#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <map>

#define ll long long

using namespace std;

int main() {
    
    int n; cin >> n;
    vector<int> v(5, 0);
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        v[x]++;
    }

    v[1] = max(0, v[1] - v[3]);
    int result = v[3] + v[4] + v[2] / 2;
    v[2] = v[2] % 2;
    if(v[2] > 0) {
        result += 1;
        v[1] = max(0, v[1] - 2);
    }
    result += (v[1] + 3) / 4;
    
    cout << result << endl;

	return 0;
}
