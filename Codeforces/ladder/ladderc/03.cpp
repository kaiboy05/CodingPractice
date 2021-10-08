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

    map<int, int> mp;
    
    bool fail = false;

    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        if(++mp[a] == 3) {
            fail = true;
        }
    }

    if(fail)
        cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        vector<int> a, b;
        for(auto p : mp) {
            a.push_back(p.first);
            if(p.second == 2)
                b.push_back(p.first);
        }

        cout << a.size() << endl;
        for(int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;

        cout << b.size() << endl;
        for(int i = b.size() - 1; i >= 0; i--) {
            cout << b[i] << " ";
        }
        cout << endl;
    }

	return 0;
}
