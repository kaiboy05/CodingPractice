#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <map>

#define ll long long

using namespace std;

int main() {
    
    string s; cin >> s;
    vector<int> v(s.size(), 0);
    bool last = s[0] == '.';

    for(int i = 1; i < s.size(); i++) {
        if(s[i] != s[i-1]){
            v[i] = v[i-1];
            last = !last;
        } else {
            v[i] = v[i-1]+1;
        }
    }

    int n; cin >> n;
    while(n > 0) {
        int l, r; cin >> l >> r;
        l--; r--;
        cout << v[r] - v[l] << endl;

        n--;
    }

	return 0;
}
