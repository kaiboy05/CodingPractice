#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <map>
#include <queue>
#include <set>
 
#define ll long long
 
using namespace std;

int main() {
    
    int n; cin >> n;
    int fours = 0;
    while(n > 0 && n % 7 != 0) {
        fours++;
        n -= 4;
    }

    if(n < 0) {
        cout << -1;
    } else {
        for(int i = 0; i < fours; i++) {
            cout << 4;
        }
    }
    for(int i = 0; i < n / 7; i++) {
        cout << 7;
    }
    cout << endl;

	return 0;
}
