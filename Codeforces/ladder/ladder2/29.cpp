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

    string s; cin >> s;
    
    char c = 'a';
    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= c) {
            if(s[i] == c) {
                c++;
            } else {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;

	return 0;
}
