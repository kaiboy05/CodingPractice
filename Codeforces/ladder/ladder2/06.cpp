#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        int x; cin >> x;
        sum += x;
    }

    cout << ((sum != 0) && (sum % 5 == 0) ? sum / 5 : -1) << endl;

	return 0;
}
