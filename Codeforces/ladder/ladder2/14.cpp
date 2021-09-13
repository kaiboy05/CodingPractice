#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <map>

#define ll long long

using namespace std;

int main() {
    
    int n; cin >> n;

    int min = 1000000001;
    int result = 1000000001;
    int last = -1;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        if(min > x) {
            min = x;
            result = 1000000001;
            last = i;
        } else if(min == x) {
            result = std::min(result, i - last);
            last = i;
        }
    }

    cout << result << endl;

	return 0;
}
