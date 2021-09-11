#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <map>

#define ll long long

using namespace std;

int main() {
    
    int n; cin >> n;

    vector<bool> v(n, 0);
    int ptr = n-1;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        
        v[x-1] = true;
        if(v[ptr]) {
            while(ptr >= 0 && v[ptr]) {
                cout << (ptr + 1) << " ";
                ptr--;
            }
        }
        
        cout << endl;
    }

	return 0;
}
